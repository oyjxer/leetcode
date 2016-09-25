//============================================================================
// Name        : findMedianSortedArrays.cpp
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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	int i = 0, j = 0;
    	int len1 = nums1.size(), len2 = nums2.size();
    	vector<int> vec;
    	while(i < len1 && j < len2){
    		if(nums1[i] < nums2[j]){
    			vec.push_back(nums1[i]);
    			i++;
    		}else{
    			vec.push_back(nums2[j]);
    			j++;
    		}
    	}
    	while(i < len1){
    		vec.push_back(nums1[i]);
    		i++;
    	}
    	while(j < len2){
    		vec.push_back(nums2[j]);
    		j++;
    	}
    	int len = len1 + len2;
    	if(len % 2 != 0){
    		return (double)vec[len / 2];
    	}else{
    		return (double)(vec[len / 2 - 1] + vec[len / 2]) / 2.0;
    	}
    }
};

int main() {
	vector<int> nums1, nums2;
	int len1, len2, num;
	int i = 0, j = 0;
	cin >> len1 >> len2;
	while(i < len1){
		cin >> num;
		nums1.push_back(num);
		i++;
	}
	while(j < len2){
		cin >> num;
		nums2.push_back(num);
		j++;
	}
	Solution sol;
        double ans = sol.findMedianSortedArrays(nums1, nums2);
        cout << ans;
	return 0;
}
