#include<stdio.h>

int main (){
	
	int n , i , factorial=1 ;
	
		printf("Enter a value to sum 1 to your valuve : ");
		scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++){
		
		factorial = factorial * i;
			
	}
	
	printf("%d\n",factorial);
	
	return 0;
}
