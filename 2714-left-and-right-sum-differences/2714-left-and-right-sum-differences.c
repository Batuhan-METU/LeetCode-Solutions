/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *answer = NULL;

    answer = (int*) malloc(numsSize * sizeof(int));

    int *left = NULL; 
    int *right = NULL;
    left = (int*) malloc(numsSize * sizeof(int));
    right = (int*) malloc(numsSize * sizeof(int));

   left[0] = 0;
   right[numsSize-1] = 0;
    for (int i = 0; i<numsSize-1; i++)
    {
        left[i+1] = left[i] + nums[i]; 
    }
    for (int j = numsSize-1; j >= 1; j--)
    {
        right[j-1] = right[j] + nums[j]; 
    }

    for (int k = 0; k<numsSize; k++)
    {
        answer[k] = abs(left[k] - right[k]);
    }
    
    *returnSize = numsSize;

    return answer; 
}