int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    int sum = 0; 
    for (int i = 0; i<startTimeSize; i++)
    {
        for (int j = startTime[i];j<=endTime[i];j++) // 1 ve 3.
        {
            if (j == queryTime)
                sum += 1; 
        } 
    }
    return sum; 
}