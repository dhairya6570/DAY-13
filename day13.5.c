#include<stdio.h>

int main (){
	
	int n , i = 1 ;
	
		printf("Enter a value to find odd number from 1 to your value : ");
		scanf("%d",&n);
	
	do{
		printf("%d\n",i);
		i=i+2;
	}while(i<=n);
	
	return 0;
}
