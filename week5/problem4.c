#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int start=1;
    for(int i=0; i<6; i++){
        for(int j=0; j<start; j++){
            printf(" *");
        }
        start+=2;
        printf("\n");
    }
    return 0;
}