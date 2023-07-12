//WAP to find the minimum number from the given 3 numbers.

#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the Number A :");
	scanf("%d",&a);
	printf("Enter the Number B :");
	scanf("%d",&b);
	printf("Enter the Number C :");
	scanf("%d",&c);
	if(a<b){
		printf("A is Minimum");
	}else if(b<c){
		printf("B is Minimum");
	}else {
		printf("C is Minimum");
	}
}
/*output
Enter the Number A :3
Enter the Number B :4
Enter the Number C :5
A is Minimum
*/
