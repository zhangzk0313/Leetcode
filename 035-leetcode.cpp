/*************************************************************************
	> File Name: 035-leetcode.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年03月09日 星期一 21时32分02秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

int searchInsert(int* nums, int numsSize, int target){
    for (int i = 0; i < numsSize; i++) {
        if (target == nums[i]) return i;
        else if (nums[i] < target && i != numsSize - 1) {
            continue;
        } else if (nums[i] < target && i == numsSize - 1){
            return (i + 1);
        } else {
            return i;
        }
    }
    return 0;
}
