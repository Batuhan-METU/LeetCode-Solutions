/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) { 

    bool *result = (bool*)malloc(candiesSize * sizeof(bool)); 
    int maxCandies = 0; 
    for (int i = 0; i<candiesSize; i++)
    {
        if (candies[i] > maxCandies)
            maxCandies = candies[i]; 
    }

    for (int j = 0; j<candiesSize; j++)
    {
        result[j] = (candies[j] + extraCandies >= maxCandies); 
    }
    *returnSize = candiesSize; 
    return result; 
}