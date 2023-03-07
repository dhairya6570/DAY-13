#include<stdio.h>

int main (){
	
	int n , i = 1 ;
	
		printf("Enter a value : ");
		scanf("%d",&n);
	
	do{
		printf("%d\n",n);
		n--;
	}while(i<=n);
	
	return 0;
}
