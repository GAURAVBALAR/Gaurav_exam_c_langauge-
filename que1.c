//WAP to print all odd numbers from a given range using UDF.
#include<stdio.h>
int arr(int a, int b){
 int i,j;
 for(i=a;i<=b;i++){
 if(i%2!=0){
 	printf("Odd Numbers Are : %d\n",i);
 }	
 }
 return 0;
}

void main(){
	int x,z;
	printf("Enter the Starting Number :");
	scanf("%d",&x);
	printf("Enter the Ending Number :");
	scanf("%d",&z);
	arr(x,z);
}
 /*output
 Enter the Starting Number :20
Enter the Ending Number :30
Odd Numbers Are : 21
Odd Numbers Are : 23
Odd Numbers Are : 25
Odd Numbers Are : 27
Odd Numbers Are : 29
 */
