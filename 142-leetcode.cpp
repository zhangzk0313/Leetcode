/*************************************************************************
	> File Name: LeetCode-142.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月26日 星期三 14时52分47秒
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
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return NULL;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next ==     NULL) return NULL;
        q = q->next;
    } while (p != q);
    int cnt = 0;
    do {
            cnt++;
            q = q->next;
    } while (p != q);
    p = q = head;
    while(cnt--) q = q->next;
    while(p != q) p = p->next, q = q->next;
    return p;
}
