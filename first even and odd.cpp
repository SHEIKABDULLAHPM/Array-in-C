#include<stdio.h>
int main(){
	int num[50];
	int num1[50];
	int n;
	int i,j,k=0;
	int temp;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(num[i]>num[j]){
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
					
		}
	}
	}
	for(i=0;i<n;i++){
		if(num[i]%2==0){
			num1[k++]=num[i];
		}
	}O
	for(i=0;i<n;i++){
		if(num[i]%2!=0){
			num1[k++]=num[i];
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",num1[i]);
	}
}
