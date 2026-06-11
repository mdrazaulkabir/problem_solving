#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=0){
        int start=1;
        int space=n-1;
        for(int i=1; i<=n; i++){
            for(int l=space; l>=1; l--){
            printf(" ");
           }
           space--;
            for(int j=1; j<=start; j++){
                if(i%2!=0){
                    printf("#");
                }
                else{
                    printf("-");
                }
            }
            start+=2;
            printf("\n");
        }


        for(int i=n-1; i>=1; i--){
            for(int k=1; k<=n-i; k++){
                printf(" ");
            }

            for(int j=1; j<=i*2-1; j++){
                if(i%2!=0){
                    printf("#");
                }
                else{
                    printf("-");
                }
            }
            printf("\n");
        }
    }
    return 0;
}