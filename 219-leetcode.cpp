/*************************************************************************
	> File Name: 219-leetcode.cpp
	> Author: zhang zk
	> Mail: 815028387@qq.com 
	> Created Time: 2020年03月09日 星期一 21时34分36秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

#include <math.h>

bool containsNearbyDuplicate(int* nums, int numsSize, int k){
    if(numsSize == 0) return false;
    int mark[numsSize]; //Hash表
    memset(mark, -1, sizeof(int) * numsSize);
    int i, tmp;
    for (int i = 0; i < numsSize; i++) {
        tmp = nums[i] % numsSize;// Ｈash函数
        if (tmp < 0) tmp +=  (numsSize - 1);
        if (mark[tmp] == -1) mark[tmp] = i; //存下数组下标
        else { //已经存数
            while(nums[mark[tmp]] != nums[i]) //发生冲突
            {
                tmp++; tmp %= numsSize;
                if (mark[tmp] == -1) //没有存数
                mark[tmp] = i; //存下数组下标
            }
            if (i != mark[tmp]) {
                if (i - mark[tmp] <= k) return true;
                else 
                mark[tmp] = i;
            }
        }
    }
    return false;
}
