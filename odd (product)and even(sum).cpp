#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int even=0,odd=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		if(num[i]%2==0){
			even+=num[i];
		}
		else{
			odd*=num[i];
			
		}
			
	}
 	printf("%d",even);
 	printf("\n%d",odd);
}
