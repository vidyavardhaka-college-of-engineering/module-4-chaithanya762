//To store n elements in an array and print the elements using pointer.
// Input : 5 4 6 1 7 3       
// Output: 4 6 1 7 3                                                    
                                                                                                                                                   
                                                                                  
#include <stdio.h>
int main()
{
   int arr1[25], i,n;
   printf(" ");
   scanf("%d",&n);
   printf("\n",n);
   for(i=0;i<n;i++)
      {
	   scanf("%d",&arr1[i]);
	  }
   printf("\n");
   for(i=0;i<n;i++)
      {
	  printf("%d ",*(arr1+i));//print the array elements
	  }
	   return 0;
}
