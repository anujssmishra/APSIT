#include<stdlib.h>
#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int *result = malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++) {
        for(int j=i+1;j<numsSize;j++) {
            if(nums[i]+nums[j]==target) {
                result[0] = i;
                result[1] = j;
            }
        }
    }
    *returnSize = 2;
    return result;
}

int main() {
    int nums[] = {2,7,11,15};
    int returnSize;
    int *result = twoSum(nums, 4, 9, &returnSize);
    printf("[%d,%d]\n",result[0],result[1]);
}