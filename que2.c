//WAP to find a cube of all elements from a given 2D array.
#include<stdio.h>
void main(){
	int i,j;
	printf("Enter the NO of Rows :");
	scanf("%d",&i);
	printf("Enter the NO of Columns :");
	scanf("%d",&j);
	int a[i][j];
	int n,m;
	for(n=0;n<i;n++){
		for(m=0;m<j;m++){
	printf("Enter the Element of the Array : a[%d][%d] => ",n,m);
			scanf("%d",&a[n][m]);
		}
		
	}
	printf("Cube of the Elements Of the Array Are :");
	for(n=0;n<i;n++){
		for(m=0;m<j;m++){
	a[n][m]=a[n][m]*a[n][m]*a[n][m];
	printf("%d, ",a[n][m]);
		}	
	}
	
}
/*output 
Enter the NO of Rows :2
Enter the NO of Columns :2
Enter the Element of the Array : a[0][0]2
Enter the Element of the Array : a[0][1]3
/nEnter the Element of the Array : a[1][0]4
Enter the Element of the Array : a[1][1]5
/nCube of the Elements Of the Array Are :8, 27, 64, 125,*/
