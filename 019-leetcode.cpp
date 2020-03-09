/*************************************************************************
	> File Name: LeetCode-19.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月25日 星期二 21时03分14秒
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


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = q = &ret;
    while (n--) q = q->next;
    q = q->next;
    while (q) {
        q = q->next;
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    return ret.next;
}
