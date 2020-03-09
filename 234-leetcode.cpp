/*************************************************************************
	> File Name: LeetCode-234.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月28日 星期五 16时14分03秒
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

int get_length(struct ListNode *head) {
    int n = 0;
    while (head) n++, head =   head->next;
    return n;
}

struct ListNode *get_node(struct ListNode *head, int ind) {
    while (ind--) head = head->next;
    return head;
}

struct ListNode *reverse(struct ListNode *head) {
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

bool isPalindrome(struct ListNode* head){
    int len = get_length(head);
    struct ListNode *node = reverse(get_node(head, (get_length(head) + 1) / 2));
    while (node) {
        if (node->val - head->val) return false;
        node = node->next;
        head = head->next;
    }
    return true;
}
