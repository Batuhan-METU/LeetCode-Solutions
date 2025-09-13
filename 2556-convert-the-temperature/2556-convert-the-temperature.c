/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {

    *returnSize = 2;
    double Kelvin, Fahrenheit; 
    Kelvin = celsius + 273.15;
    Fahrenheit = celsius * 1.80 + 32.;

    double *ans = (double*) malloc(2* sizeof(double)); 

    ans[0] = Kelvin; 
    ans[1] = Fahrenheit; 

    return ans;
}