//============================================================================
// Name        : reverse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
    	int t;
		int ans = 0;
		bool flag = false;
		if(x < 0){
			x = -x;
			flag = true;
		}
		while(x > 0){
			t = x % 10;
			x = x / 10;
			if(ans > 214748364 && x < 9){
				ans = 0;
				break;
			}
			else{
				ans = ans * 10 + t;
			}
		}
		if(flag)
			ans = -ans;
		return ans;
    }
};

int main() {
	int x;
	cin >> x;
	Solution sol;
	int ans = sol.reverse(x);
	cout << ans;
	return 0;
}
