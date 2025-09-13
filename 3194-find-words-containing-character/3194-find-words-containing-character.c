/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *result = NULL;
    result = (int*) malloc(wordsSize * sizeof(int));  
    int k = 0;
    for (int i = 0; i<wordsSize; i++)
    {
        for (int j = 0; j<strlen(words[i]); j++)
        {
            if (words[i][j] == x)
            {
                result[k] = i;
                k++;
                break; // words founded, no longer need to examine other characters. 
            }   
        }
    }
    *returnSize = k; 
    return result;
}