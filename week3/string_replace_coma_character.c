#include<stdio.h>
#include<string.h>
int main(){
    char arrs[100005];
    scanf("%s",arrs);
    // printf("%s",arrs);
    int n=strlen(arrs);
    for(int i=0; i<n; i++){
        if(arrs[i]==','){
            arrs[i]=' ';
        }
        else if(arrs[i]>='A' && arrs[i]<='Z'){
            arrs[i] +=32;
        }
        else{
            arrs[i] -=32;
        }
    }

     printf("%s",arrs);
    return 0;
}