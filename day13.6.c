#include<stdio.h>

int main (){
	
	int n , i = 1 ;
	
	printf("Enter a value to find even number from your value to 1 : ");
	scanf("%d",&n);
	
	do{
		
		if(n%2==0)
		
		printf("%d\n",n);
		n--;
	}while(i<=n);
	
	return 0 ;
}
