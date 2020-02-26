/*************************************************************************
	> File Name: LeetCode-141.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月26日 星期三 14时48分08秒
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
bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return false;
    do {
            p = p->next;
            q = q->next;
            if (q == NULL || q->next == NULL) return false;
            q = q->next;
    } while (p != q);
    return true;
}
