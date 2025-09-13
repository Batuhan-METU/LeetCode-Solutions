bool checkSelfDiv(int number)
{
    int temp = number; // temp = 1128 8 -- 112 

    while (temp)
    {
        if (temp % 10 == 0 || number % (temp %10) != 0)
            return false; 
        temp /= 10; 
    }
    return true; 
}

int *selfDividingNumbers(int left, int right, int *returnSize)
{
    int *arr = (int*)malloc(sizeof(int) * (right - left + 1));
    *returnSize = 0;

    for (int i = left;i <= right; i++)
        if (checkSelfDiv(i))
            {arr[(*returnSize)] = i;
            (*returnSize)++;}
    return arr; 
}
