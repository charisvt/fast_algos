float fast_isqrt(float num){
    //this function returns 1/sqrt(num) using only multiplications, additions and bit shifts.
    long i;
    float x2, y;
    const float threehalfs = 1.5F;
    x2 = num * 0.5F; //store half the num
    y = num; //store the num
    i = * (long *) &y; //copy the num's bits to an int, so we can do bit manipulation
    i = 0x5f3759df - (i >> 1); //magic
    y = * (float *) &i; //get a float out of the int's bits
    y = y * (threehalfs - (x2 * y *y)); //newton's method to get a better approximation
    
    return y;
}
