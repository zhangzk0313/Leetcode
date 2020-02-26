/*************************************************************************
	> File Name: LeetCode-206.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月26日 星期三 14时57分03秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if (!head) return NULL;
    struct ListNode *p = head->next, *q;
    head->next = NULL;
    while (p) {
        q = p->next;
        p->next = head;
        head = p;
        p = q;
    }
    return head;
}
