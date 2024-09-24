#include<stdio.h>
#include<math.h>
int main(){
	int num[50];
	int n;
	int i,j,k=0;
	int square[50]={0};

	int seen[10]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
	
		if(seen[i]==0){
		
		for(j=i+1;j<n;j++){
			if(num[i]==num[j]){
				square[k++]=pow(num[j],2);
				seen[j]=1;
			}
		}
	}
}
	for(i=0;i<k;i++){
			printf("%d ",square[i]);
	}

	
}
