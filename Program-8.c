//To compute the sum of all elements in an array using pointers

//Input: 5 2 3 4 5 6 
//Output:Sum=20

#include <stdio.h>
int main() 
{
   int arr1[10];
   int i,n, sum = 0;
   int *pt;
   printf("");
   scanf("%d",&n);
   printf("\n");
   for(i=0;i<n;i++)
      {
	  
	  scanf("%d",&arr1[i]);
	  } 	
  pt = arr1; // pt store the base address of array arr1
  for (i = 0; i < n; i++) {
     sum=sum+*pt;
     pt++; // write the code to calculate sum
     
   }
  printf("Sum=%d",sum);
}
