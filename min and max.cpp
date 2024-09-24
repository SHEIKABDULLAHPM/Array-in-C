#include<stdio.h>
int main(){
	int num[50];
	int n;
	int max,min,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	max=num[0];
	min=num[0];
	for(i=0;i<n;i++){
		if(num[i]>max){
			max=num[i];
			
		}
		if(num[i]<min){
			min=num[i];
			
		}
	}
	printf("max : %d",max);
	printf("min : %d",min);
	
}
