/*
 1486. XOR Operation in an Array
 
 Given an integer n and an integer start.

Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.

Return the bitwise XOR of all elements of nums.

*/

int xorOperation(int n, int start){

    int i ;
    int arr[n];
    int len =0;
    for(i=0;i<n;i++)
    {
        arr[i] = start + 2 *i;
        len ^= arr[i];
    }
    
    return len;
}

int main(void)
{
 printf("%d\n",xorOperation(5,0));

 return 0;
}