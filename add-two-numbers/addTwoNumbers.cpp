//============================================================================
// Name        : addTwoNumbers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	int x, y, sum;
    	int flag = false;
    	x = l1 -> val;
    	y = l2 -> val;
    	sum = x + y;
    	if(sum > 9){
    		sum = sum % 10;
    		flag = true;
    	}
        ListNode* s = new ListNode(sum);
        ListNode* p = s;
        l1 = l1 -> next;
        l2 = l2 -> next;
        while(l1 != NULL || l2 != NULL){
        	x = l1 != NULL ? l1 -> val : 0;
        	y = l2 != NULL ? l2 -> val : 0;
        	sum = x + y;
        	if(flag)
        		sum++;
        	if(sum > 9){
        		sum = sum % 10;
        		flag = true;
        	}else{
        		flag = false;
        	}
        	ListNode* t = new ListNode(sum);
        	p -> next = t;
        	p = t;
        	t = NULL;
        }
        if(flag){
        	ListNode* t = new ListNode(1);
        	p -> next = t;
        	p = t;
        	t = NULL;
        }
        l1 = l1 != NULL ? l1 -> next : NULL;
        l2 = l2 != NULL ? l2 -> next : NULL;
        return s;
    }
};

int main() {
	int val;
	int len1, len2;
	cin >> len1 >> len2;
	cin >> val;
	ListNode* l1 = new ListNode(val);
	ListNode* p = l1;
	for(int i = 0; i < len1; i++){
		cin >> val;
		ListNode* t1 = new ListNode(val);
		p -> next = t1;
		p = t1;
		t1 = NULL;
	}
	ListNode* l2 = new ListNode(val);
	ListNode* p = l2;
	for(int j = 0; j < len2; j++){
		cin >> val;
		ListNode* t2 = new ListNode(val);
		p -> next = t2;
		p = t2;
		t2 = NULL;
	}
	Solution sol;
	ListNode* ans = sol.addTwoNumbers(l1, l2);
	p = ans;
	while(p != NULL){
		cout << p -> val << " ";
		p = p -> next;
	}
	return 0;
}
