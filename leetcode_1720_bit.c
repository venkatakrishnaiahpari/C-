/*
1720. Decode XORed Array
 There is a hidden integer array arr that consists of n non-negative integers.

It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. It can be proved that the answer exists and is unique.



Example 1:

Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
Example 2:

Input: encoded = [6,2,7,3], first = 4
Output: [4,2,0,7,4]

*/
int* decode(int* encoded, int encodedSize, int first, int* returnSize){
    
  int *arr = (int *)calloc(encodedSize+1 , sizeof(int));
  arr[0] = first;
	
  for(int i = 1;i<encodedSize+1;i++)
  {
	arr[i] = encoded[i-1]^arr[i-1];
  }

  *returnSize = encodedSize+1;
  return arr;
   
}

int main(void)
{
	int arr[3] = {1,2,3};
	int returnSize ;
	int *arr = decode(arr,3,1,&returnSize);

}
