#include<stdio.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	scanf("%d",&n);
	int seen[10]={0};
	int unique[50]={0};
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<n-1;i++){
	int found=1;
		
		for(j=i+1;j<n;j++){
			if(num[i]==num[j]){
			
			found=0;
			break;
		}
		}
		if(found){
			unique[k++]=num[i];
		}
	}


for(i=0;i<k;i++){
	printf("%d ",unique[i]);
}
}
