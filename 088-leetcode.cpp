/*************************************************************************
	> File Name: 088-leetcode.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年03月09日 星期一 21时33分25秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

// 倒序排，合并两个有序数组
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int k = m + n - 1, p1 = m - 1, p2 = n - 1;
    while (p1 >= 0 || p2 >= 0) {
        if (p2 < 0 || p1 >=0 && nums1[p1] >= nums2[p2]) {
            nums1[k--] = nums1[p1--];
        } else {
            nums1[k--] = nums2[p2--];
        }
    }
    return;
}
