#include<stdio.h>

int main (){
	
	int n , i = 1 , sum = 0 ;
	
		printf("Enter a value to sum 1 to your valuve : ");
		scanf("%d",&n);
	
	do{
		
		sum = sum + i;
		i++;
			
	}while(i<=n);
	
	printf("%d\n",sum);
	
	return 0;
}
