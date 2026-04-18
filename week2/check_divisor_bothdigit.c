#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=n%10;
    int d=n/10;
    if(x%d==0 || d%x==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}