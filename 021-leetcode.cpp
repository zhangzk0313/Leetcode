/*************************************************************************
	> File Name: 021-leetcode.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年03月09日 星期一 21时31分27秒
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


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode ret, *p = &ret, *q;
    ret.next = NULL;
    while(l1 && l2) {
        if (l1->val <= l2->val) {
            q = l1;
            l1 = l1->next;
        } else {
            q = l2;
            l2 = l2->next;
        }
        p->next = q;
        q->next = NULL;
        p = p->next;
    }
    if (l1) p->next = l1;
    if (l2) p->next = l2;
    return ret.next;
}
