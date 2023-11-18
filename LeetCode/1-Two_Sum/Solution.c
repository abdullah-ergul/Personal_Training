#include <stdio.h>
#include <stdlib.h>


// ! LEETCODE SECTION
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, *res=(int*)malloc(2*sizeof(int));
    *returnSize = 2;
    
    for(i=0; i<numsSize; i++) {
        for(j=i+1; j<numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                res[0]= i;
                res[1]= j;
                return res;
            }
        }
    }
    return res;
}
// ! LEETCODE SECTION


int main(){
    int arr[]= {2,7,11,15}, *m;
    int *res= twoSum(arr,4,9,m);
    printf("%d %d",res[0],res[1]);

    return 0;
}