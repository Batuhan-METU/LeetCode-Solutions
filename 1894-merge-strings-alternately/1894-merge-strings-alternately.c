char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1),len2 = strlen(word2);
    char* result = malloc(len1+len2+1);

    int index=0,j=0;
    while(j<len1 ||  j<len2){
        if(j<len1){
            result[index] = word1[j];
            index++;
        }

        if(j<len2){
            result[index]=word2[j];
            index++;
        }
        j++;
    }
    result[index]='\0';
    return result;

}