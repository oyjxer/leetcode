//============================================================================
// Name        : convert.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
    	int len = s.size();
	if (numRows == 1) return s;
	string res;
	int span = numRows * 2 - 2;
	for (int i = 0; i < numRows; i++) {
		for (int j = i; j < len; j += span) {
			res.push_back(s[j]);
			if (i > 0 && i < numRows - 1) {
				int t = j + span - 2 * i;
				if (t < len)
					res.push_back(s[t]);
			}
		}
	}
	return res;
    }
};

int main() {
	string s;
        int row;
	cin >> s;
        cin >> row;
	Solution sol;
	string res = sol.convert(s, row);
	cout << res;
	return 0;
}
