int countDigits(int number)
{
    int count = 0; 
        while (number > 0)
        {
            count++; 
            number /= 10; // 345 1 34 2 3 3 0
        }
    return count; 
}

int findNumbers(int* nums, int numsSize) {
    int sum = 0; 
    for (int i = 0; i<numsSize; i++)
    {
        if (countDigits(nums[i])%2==0)
            sum += 1; 
    }
    return sum; 
}