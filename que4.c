//WAP to print all odd numbers from a given 1D array using Pointer.
#include<stdio.h>
int main(){
	int n;
	printf("Enter the Size of the Array :");
	scanf("%d",&n);
	int a[n];
	int *ptr;
	ptr=&a[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter the elements of Array : A[%d] => ",i);
		scanf("%d",&ptr[i]);
	}
	printf("Odd Numbers of the Array Are :");
	   
	for(i=0;i<n;i++){
		
		if(ptr[i] %2!= 0){
			printf("%d, ",ptr[i]);
		}
	}
}
/*
Enter the Size of the Array :2
Enter the elements of Array : A[0]4
Enter the elements of Array : A[1]5
Odd Numbers of the Array Are :5,

*/

