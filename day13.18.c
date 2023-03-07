#include<stdio.h>

int main (){
	
	int n , i , sum=0 ;
	
		printf("Enter a value to sum 1 to your valuve : ");
		scanf("%d",&n);
	
	for(i=1 ; i<=n ;  i ++){
		
		sum = sum + i;
			
	}
	
	printf("%d\n",sum);
	
	return 0;
}
