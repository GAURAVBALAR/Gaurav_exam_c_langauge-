//Write all leap years from a given range into a text file.
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the Starting Year :");
	scanf("%d",&a);
	printf("Enter the Ending Year :");
	scanf("%d",&b);
	int i;
	printf("Leap Years in the given Range Are :");
	for(i=a;i<=b;i++){
		if(i%4==0){
			printf("%d ,",i);
		}
	}
}
/*output
Enter the Starting Year :2000
Enter the Ending Year :2030
Leap Years in the given Range Are :2000 ,2004 ,2008 ,2012 ,2016 ,2020 ,2024 ,2028 ,
*/
