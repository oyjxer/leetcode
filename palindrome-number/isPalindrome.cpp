//============================================================================
// Name        : isPalindrome.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    	if(x < 0)
    		return false;
        int base = 1;
        int l, r;
        while(x / base > 9)
        	base *= 10;
        while(x > 0){
        	l = x / base;
        	r = x % 10;
        	if(l != r)
        		break;
        	x = (x % base) / 10;
        	base = base / 100;
        }
        if(x > 0)
        	return false;
        else
        	return true;
    }
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
