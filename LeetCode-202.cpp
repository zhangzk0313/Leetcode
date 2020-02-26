/*************************************************************************
	> File Name: LeetCode-202.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月26日 星期三 14时54分48秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

int get_next(int x) {
    int n = 0;
    while (x) {
        n += (x % 10) * (x % 10);
        x /= 10;
    }
    return n;
}


bool isHappy(int n){
    int p = n, q = get_next(n);
    while (q != 1) {
        p = get_next(p);
        q = get_next(get_next(q));
        if (p == q) break;
    }
    return q == 1;
}
