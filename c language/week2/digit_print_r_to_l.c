#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
         int n;
        scanf("%d",&n);
        if(n==0){
            printf("%d",n);
        }
        while (n!=0)
            {
                int x=n%10;
                printf("%d ",x);
                n=n/10;
            }
            printf("\n");
    }
    
    return 0;
}