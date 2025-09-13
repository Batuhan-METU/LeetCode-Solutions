int maxFrequencyElements(int* nums, int numsSize) {
    int maxFrequency = 0; 
    int array[101] = {0}; 

    for (int i = 0; i<numsSize; i++)
    {
        int currentNumber = nums[i]; 

        array[currentNumber] += 1; 
        // böyle yaparak bir dizideki bir sayının kaç kere geçtiğini buluyoruz !! 
    }

    for (int i = 0; i<101; i++)
    {
        if (array[i] > maxFrequency)
            maxFrequency = array[i]; 
    }

    int sum = 0; 

    for (int i = 0; i<101; i++)
    {
        if (array[i] == maxFrequency)
            sum += array[i]; 
    }

    return sum; 
}