/*************************************************************************
	> File Name: LeetCode-237.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月28日 星期五 16时14分52秒
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
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;//向后覆盖
    struct ListNode *p = node->next;
    node->next = p->next;
    free(p);
}
