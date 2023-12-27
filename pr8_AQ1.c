/*
Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/

#include<stdio.h>
#include<string.h>

 main(){
	
	char a[100];
	int *len;
	
	printf("Enter any string : ");
	gets(a);
	
	len=&a;
                len=strlen(a);
	
	printf("String langth is : %d",len);
}