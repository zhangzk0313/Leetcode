/*************************************************************************
	> File Name: 038-leetcode.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年03月09日 星期一 21时32分44秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

char * countAndSay(int n){
    char *temp = (char *)malloc(sizeof(char) * 5000);
    char *mark = (char *)malloc(sizeof(char) * 5000);
    mark[0] = '1';
    mark[1] = '\0';    //结束标志
    char *p, key;//key存当前字符
    int i, count = 0, j;
    for (i = 1; i < n; i++) {
        j = 0;
        key = mark[0];
        count = 0;
        p = mark;
        while(*p != '\0') {
            if(*p == key) {
                count++;
            } else {
                temp[j++] = count + '0';
                count = 1;
                temp[j++] = key;
                key = *p;
            }
            p++;
        }
        temp[j++] = count + '0'; //先存计数器
        temp[j++] = key;//再存关键字
        temp[j] = '\0';
        strcpy(mark, temp);
    }
    return mark;
}
