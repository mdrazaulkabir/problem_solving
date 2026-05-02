#include<stdio.h>
#include<string.h>
int main(){
    char arrs[1005];
    scanf("%s",arrs);
    
    int n=strlen(arrs);
    int flag=1;
     for(int i=0,j=n-1; i<j; i++,j--){
        if(arrs[i]!=arrs[j]){
            flag=0;
            printf("NO");
            break;
        }
    }
    if(flag==1){
        printf("YES");
    }
    return 0;
}