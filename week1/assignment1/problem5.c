#include<stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    if(n>1000){
        printf("You can buy panjabi\n");
        if(n-1000>=500){
            printf("you can buy the pair of shoes\n");
            printf("alisa also can buy the pair of shoes\n");
        }
    }
    else{
        printf("bad luck");
    }
    return 0;
}