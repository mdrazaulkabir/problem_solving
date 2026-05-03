#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int start=1;
    int spaceStart=n-1;
    for(int i=1; i<=n; i++){                 ///line print 
        for(int k=spaceStart; k>=1; k--){    ///space print 
            printf("  ");
        }
        spaceStart--;

        for(int j=1; j<=start; j++){         ///start print
            printf("* ");
        }
        start +=2;

        printf("\n");
    }
    return 0;
}