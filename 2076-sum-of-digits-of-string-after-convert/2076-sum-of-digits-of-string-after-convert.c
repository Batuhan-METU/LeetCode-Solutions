int getLucky(char* s, int k) {
    int value; 
    int sum = 0; 
    for (int i = 0; i<strlen(s); i++)
    {
        value = s[i] - 96; // mesela gezerken ilk harf l ise l nin değerini buluruz. 40 diyelim
        // e bizim sum o zaman tüm rakamların toplamı olacak. 
        while (value > 0)
        {
            sum += value % 10; 
            value /= 10; 
        }
    }
    while (--k>0)  
    {
        int total = 0;  
        while (sum > 0)
        {
            total += sum % 10; 
            sum /= 10; 
        }
        sum = total;  
    }
    return sum; 
}