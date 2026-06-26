#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int row=r-1;
    for(int j=0; j<c; j++){
            printf("%d ",arr[row][j]);
        }
    printf("\n");
    int column=c-1;
    for(int i=0; i<r; i++){
        printf("%d ",arr[i][column]);
    }

    return 0;
}