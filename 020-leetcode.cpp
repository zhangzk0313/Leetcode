/*************************************************************************
	> File Name: LeetCode-20.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月28日 星期五 16时16分43秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;


//任何一个时刻，左括号应大于等于右括号数量，压栈弹栈，最后top等于-1
bool isValid(char * s){
    int len = strlen(s), top = -1, flag = 1;
    char *stack = (char *)malloc(sizeof(char) * len);
    while (*s) {
        switch (*s) {
            case  '(' :
            case  '[' :
            case  '{' : stack[++top] = s[0]; break;
            case  ')' : flag = (top != -1 && stack[top--] == '('); break;
            case  ']' : flag = (top != -1 && stack[top--] == '['); break;
            case  '}' : flag = (top != -1 && stack[top--] == '{'); break;
        }
        if (!flag) break;
        s++;
    }
    free(stack);
    return (top == -1 && flag);
}
