int sumOfUnique(int* nums, int numsSize) {
  int hash[101] = {0};
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]] += 1;
    }

    for (int i = 0; i < 101; i++) {
        if (hash[i] == 1) {
            sum += i;
        }
    }

    return sum;
}