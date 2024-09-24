#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char str[100];
    int sum=0;
    
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        int count=1;
        if(str[i]==str[i+1]){
        count++;
        i=i+1;
        }
        printf("%d ",count);
        sum+=count;
        
    }
    printf("\n%d",sum*sum);
}
