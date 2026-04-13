#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    // printf("%d",ch);
    if(ch>='0'&& ch<='9'){
        printf("IS DIGIT");
    }
    else{
        if(ch>='a'&& ch<='z'){
            printf("ALPHA\n");
            printf("IS SMALL");

        }
        else{
            printf("ALPHA\n");
            printf("IS CAPITAL");
        }
    }
    return 0;
}