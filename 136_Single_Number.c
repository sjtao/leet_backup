/*
 XOR of all array elements gives us the number with single occurrence because:
a) XOR of a number with itself is 0.
b) XOR of a number with 0 is number itself.
*/


int singleNumber(int* nums, int numsSize){
    int i;
    int result = 0;
    
    for (i = 0; i < numsSize; i++)
    {
        result = result ^ nums[i];
    }
    
    return result;
}

