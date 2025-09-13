bool areOccurrencesEqual(char* s) {
    int freq[256] = {0}; 
    for (int i = 0; i<strlen(s); i++)
    {
        freq[s[i]] += 1; 
    }
    for (int i = 0; i<256; i++)
    {
        if (freq[i] != 0 && freq[i] != freq[s[0]])
            return false; 
    }
    return true; 
}