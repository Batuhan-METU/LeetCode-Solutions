int digitCount(int number)
{
    int count = 0; 

    while (number > 0)
    {
        count++; 
        number /= 10; 
    }

    return count; 
}


bool canAliceWin(int* nums, int numsSize) {
    int sum1; 
    int sum2; 
    for (int i = 0; i<numsSize; i++)
    {
        if (digitCount(nums[i]) == 1)
            sum1 += nums[i]; 
        else 
            sum2 += nums[i]; 
    }

    if (sum1 == sum2)
        return false; 
    else 
        return true; 
}