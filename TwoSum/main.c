/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int sum;
    int *ans = malloc(2 * sizeof(int));

//    qsort(nums, numsSize, sizeof(int), compare);
    for ( i = 0 ; i < numsSize ; i ++ )
        for ( j = i + 1 ; j < numsSize ; j ++ ) {
            sum = target - nums[i] - nums[j];
            if ( sum == 0 ) {
                ans[0] = i;
                ans[1] = j;
                goto here;
            }

        }
here:
    return ans;
}

int main(void)
{
    return 0;
}
