.#include<stdio.h>
int main(){
	int num[50];
	int n;
	int temp,temp1,temp3;
	int seen[10]={0};
	int i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n;i++){
		
		int found=1;
		
		for(j=i+1;j<n;j++){
			if(num[i]<num[j]){
				found=0;
				break;
				
			}
	}
	if(found){
		seen[k++]=num[i];
	}
		}
		
		
		
		
	
	for(i=0;i<k-1;i++){
		for(j=i+1;j<k;j++){
			if(seen[i]>seen[j]){
				temp3=seen[j];
				seen[j]=seen[i];
				seen[i]=temp3;
				
			}
		}
	}
	for(i=0;i<k;i++){
		printf("%d ",seen[i]);
	}
}

