char* reverseString(char* string)
{
    char *result = (char*)malloc((strlen(string) + 1) * sizeof(char));
    int k = 0; 

    for (int i = strlen(string)-1; i>= 0; i--)
    {
        result[k] = string[i]; 
        k++;
    } 
    result[k] = '\0';

    return result; 
}

int maximumNumberOfStringPairs(char** words, int wordsSize) {
    int sum = 0;
    for (int i = 0; i<wordsSize; i++)
    {
        for (int j = i+1; j<wordsSize; j++)
        {
            if (strcmp(reverseString(words[i]), words[j])==0)
                sum += 1; 
        }
    }
    return sum; 
}