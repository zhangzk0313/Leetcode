/*************************************************************************
	> File Name: LeetCode-203.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月26日 星期三 14时56分14秒
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


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret, *current_node = &ret, *delete_node;
    ret.next = head;
    while (current_node->next) {
        if (current_node->next->val - val) {
            current_node = current_node->next;
        } else {
            delete_node = current_node->next;
            current_node->next = delete_node->next;
            free(delete_node);
        }
    }
    return ret.next;
}
