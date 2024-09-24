#include<stdio.h>
int main(){
	int num1[50];
	int num2[50];
	int n1,n2;
	int count=0;
	int sum;
	int i,j,k=0;
	scanf("%d",&n1);
	
	for(i=0;i<n1;i++){
		scanf("%d",&num1[i]);
		
	}
		scanf("%d",&n2);
	for(i=0;i<n2;i++){
		scanf("%d",&num2[i]);
		
	}
	for(i=0;i<n1;i++){
		sum+=num1[i];
	}

	for(i=0;i<n2;i++){
		for(j=i+1;j<n2;j++){
			if(num2[i]+num2[j]==sum){
				count++;
				
			}
		}
	}
	for(i=0;i<n2;i++){
		for(j=i+1;j<n2;j++){
			for(k=j+1;k<n2;k++){
			
			if(num2[i]+num2[j]+num2[k]==sum){
				count++;
				
			}
		}
	}
	}
	printf("%d",count);
}
