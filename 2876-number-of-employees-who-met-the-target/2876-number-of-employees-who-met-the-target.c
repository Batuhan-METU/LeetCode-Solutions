int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int sum = 0;
    for (int i = 0; i<hoursSize; i++)
    {
        if (hours[i] >= target)
        {
            sum += 1;
        }
    }
    return sum; 
}