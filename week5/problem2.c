#include<stdio.h>
#include<stdbool.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
         }
    }


    if(r==c){
        bool isMagic=true;
        for(int i=0; i<r; i++){
         for(int j=0; j<c; j++){
            if(i==j || i+j==c-1){
            //(i==j || i+j==c-1) && arr[i][j] != 0 ///this condition wronw becase this check only 1 
                if(arr[i][j]!=1){
                    isMagic = false;
                }
            }
            else {
                if(arr[i][j] !=0){
                isMagic=false;
            }
            }
         }
       }
       if(isMagic){
        printf("YES");
       }
       else{
        printf("NO");
       }

    }
    else{
        printf("NO");
    }
    return 0;
}