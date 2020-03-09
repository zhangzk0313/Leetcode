/*************************************************************************
	> File Name: 003-leetcode.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年03月09日 星期一 21时30分31秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

int lengthOfLongestSubstring(char * s){
    int ret = 0;
    int head = 0, rear = 0;
    int table[128] = {0}; //建立table清零　,　所有字符的ASCII码作下标索引
    for (head = 0; head < strlen(s); head++) {
        int index = (int)s[head];
        if (table[index] != 0) {
            rear = (table[index] >= rear) ? table[index] : rear; //若table[index]!= 0 说明当前s[head]字符出现过 ,更新尾rear
        }
        ret = (ret >= head - rear + 1) ? ret : head - rear + 1;
        table[index] = head + 1;
    }
    return ret;
}
//滑动窗口法
