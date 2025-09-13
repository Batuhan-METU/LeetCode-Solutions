int countSeniors(char** details, int detailsSize) {
    int count;
    int sum = 0;  
    for (int i = 0; i<detailsSize; i++)
    {
        count = (details[i][11] - '0') * 10 + (details[i][12]-'0'); 
        if (count > 60)
        {
            sum += 1; 
        }
    }

    return sum; 
}