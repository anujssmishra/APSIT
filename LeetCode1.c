#include<stdlib.h>
#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // printf("%d",numsSize);
    u_int32_t *result = malloc(2*sizeof(u_int32_t));
    u_int16_t i, j;
    for(i=0;i<numsSize;i++) {
        for(j=i+1;j<numsSize;j++) {
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
