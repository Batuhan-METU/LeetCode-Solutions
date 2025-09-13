int largestAltitude(int* gain, int gainSize) {
    int *result = NULL;

    result = (int*)malloc((gainSize + 1) * sizeof(int));

    result[0] = 0;
    for (int i = 1; i<=gainSize; i++)
    {
        result[i] = result[i-1] + gain[i-1]; 
    }
    int max = result[0];

    for (int k = 0; k<gainSize+1; k++)
    {
        if (max<result[k])
        {
            max = result[k]; 
        }
    }

    return max; 
}