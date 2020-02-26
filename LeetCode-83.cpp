/*************************************************************************
	> File Name: LeetCode-83.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月26日 星期三 14时43分23秒
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


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p, *q;
    p = head;
    while (p && p->next) {
        if (p->val - p->next->val) {
           p = p->next;
        } else  {
            q = p->next;
            p->next = q->next;
            free(q);
        }
    }
    return head;
}
