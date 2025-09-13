int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    if (arrivalTime + delayedTime < 24)
        return arrivalTime + delayedTime; 
    else 
        return arrivalTime + delayedTime - 24; // arrivalTime = 15.00 delayedTime = 12
}