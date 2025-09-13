int countNegatives(int** grid, int gridSize, int* gridColSize) {
    // 4 * 3 bir grid varsa gridSize 4 olur. gridColSize 3 olur. 
    int sum = 0; 
    for (int i = 0; i<gridSize; i++)
    {
        for (int j = 0; j<*gridColSize; j++)
        {
            if (grid[i][j] < 0)
                sum += 1; 
        }
    }
    return sum; 
}