#include<stdio.h>

int main (){
	
	int n , i ;
	
	printf("Enter a value to find even number from your value to 1 : ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; n--){
		
		if(n%2==0)
		
		printf("%d\n",n);
	
	}
	
	return 0 ;
}
