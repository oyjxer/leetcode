//============================================================================
// Name        : towSum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> ans;
    	for(int i = 0; i < nums.size(); i++){
    		for(int j = i + 1; j < nums.size(); j++){
    			if(nums[i] + nums[j] == target){
    				ans.push_back(i);
    				ans.push_back(j);
    			}
    		}
    	}
	return ans;
    }
};

int main() {
	vector<int> nums;
	int target;
	int len, num;
	cin >> len;
	int i = 0;
	while(i < len){
		cin >> num;
		nums.push_back(num);
		i++;
	}
	cin >> target;
	Solution sol;
	vector<int> ans = sol.twoSum(nums, target);
	for(i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
	return 0;
}
