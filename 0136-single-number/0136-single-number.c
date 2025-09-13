int singleNumber(int* nums, int numsSize) {
    int array[3*10000] = {0}; 

    for (int i = 0; i<numsSize; i++)
    {
        array[nums[i]+10000]++; 
    }

    for (int j = 0; j<3*10000; j++)
    {
        if (array[j] == 1)
            return j-10000;    
    }
    return 1; 
}