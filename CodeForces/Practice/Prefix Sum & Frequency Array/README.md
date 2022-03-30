## 1- Frequency array
#### Extra notes:
* The usage of frequency arrays has its limitations. Remember that you need an array whose size is equal to the value of the largest integer in the original array. Which means that you can't use a frequency array if the values in the original array can be up to 10^9 for example.  
In most cases, you can use frequency arrays safely for values up to 10^7. However, in some websites like Codeforces, you will be given the amount of memory available for your program, which you can use to calculate (roughly) the maximum size of a frequency array that you can use.

* You can use a frequency array to sort an array in O(M) time, where M is the value of the largest integer in the array. Which could be much more efficient than merge sort (which runs in O(NlogN)) in cases where the array size is large but the values inside the array are bounded with a small number.
I'll leave it for you to think about how we could implement this function that can sort an array in O(M) using a frequency array.

## 2- Prefix Sum
#### Exrta notes:
* Prefic mean summation or commulative of array if we have array of 5 elements 5,6,7,1,2 , 
prefixSeum[2] = prefixSum[2] + prefixSum[2-1] = 7 + (6+5) = 18.
prefix[k]=prefix[k−1]+arr[k]
and we can write it as :
```c
for(int i = 1; i < n; i++)  A[i] += A[i-1];
```



