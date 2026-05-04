#include<stdio.h>
#include<string.h>
int main(){
    
    char a[1001],b[1001];
    
        scanf("%s",a);
        scanf("%s",b);
        int alen=strlen(a);
        int blen= strlen(b);

       if(alen<blen){
        printf("%s",a);
       }
    //    else{
    //     printf("%s",b);
    //    }
        // printf("%s %s",a,b);
    return 0;
}