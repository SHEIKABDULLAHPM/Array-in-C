#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0,temp=0;
	int mid ;
	float median;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
				
			}
		}
	}
	mid=n/2;
	if(n%2==0){
		printf("%.2f",(num[mid-1]+num[mid])/2.0);
		
		
	}
	else{
		printf("%d",num[mid]);
	}
}
