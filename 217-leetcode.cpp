/*************************************************************************
	> File Name: 217-leetcode.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年03月09日 星期一 21时34分20秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

bool containsDuplicate(int* nums, int numsSize){
    int *a = (int *)calloc(numsSize, sizeof(int));
    int *b = (int *)calloc(numsSize, sizeof(int));
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        if(nums[i] >=0 && nums[i] < numsSize){
            if (a[nums[i]] == 0) {
                a[nums[i]] = 1; 
            } else {
                return true;
            } 
        } else {
                for(int j = 0; j < index; j++) {
                    if (b[j] == nums[i]){
                        return true;
                    }
                }
                b[index++] = nums[i];
            }
    }
    return false;
}
