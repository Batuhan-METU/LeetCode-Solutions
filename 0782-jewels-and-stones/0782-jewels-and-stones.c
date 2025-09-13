int numJewelsInStones(char* jewels, char* stones) {
    int sum = 0;
    for (int i = 0; i<strlen(stones); i++)
    {
        for (int j = 0; j<strlen(jewels); j++)
        {
            if (stones[i] == jewels[j])
                sum += 1;
        }
    }
    return sum;
}