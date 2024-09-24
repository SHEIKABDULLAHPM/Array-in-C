#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int middle;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	int mid=n/2;
	
	if(n%2==0){
		printf("%.2f ",(num[mid-1]+num[mid])/2.0);
	}
	else{
		
		middle=	num[mid];
		printf("%d ",middle);
		}
		
	}


