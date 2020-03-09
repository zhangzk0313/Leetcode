/*************************************************************************
	> File Name: LeetCode-287.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年02月28日 星期五 16时11分40秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

int findDuplicate(int* nums, int numsSize){
    int slow = 0, fast = 0;
    slow = nums[slow];
    fast = nums[nums[fast]];
    while (slow - fast) {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    int pre1 = 0;
    int pre2 = fast;
    while(pre1 - pre2) {
        pre1 = nums[pre1];
        pre2 = nums[pre2];
    }
    return pre1;
}
