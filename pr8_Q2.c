/*

Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
27    8
125 64
*/

#include<stdio.h>
 main(){
	
	int i,j,n,k;
	int a[2][2];
	int *p,*sec;
    
       printf("Enter array size");
       scanf("%d",&n);
             printf("Enter array size");
             scanf("%d",&k);
	
	p=&a[i];
   sec=&a[j];
	
	for(i=0; i<n; i++){
		for(j=0; j<k; j++){
			printf("Enter array element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}printf("\n");
	
	for(i=0; i<n; i++){
		printf(" %d \n",(*(p+i))*(*(p+i))*(*(p+i)));
	}
	for(j=0; j<k; j++){
		printf(" %d \n",(*(sec+j))*(*(sec+j))*(*(sec+j)));
	}
}
