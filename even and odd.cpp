#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j=0,k=0;
	int even[10];
	int odd[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		if(num[i]%2==0){
			even[j++]=num[i];	
		}
		else{
			odd[k++]=num[i];
		}
	}
	for(i=0;i<j;i++){
		printf("%d ",even[i]);
		
	}
	printf("\n");
	for(i=0;i<k;i++){
		printf("%d ",odd[i]);
		
	}
}
