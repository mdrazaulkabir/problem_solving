#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int posSum=0;
    int negSum=0;
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=0){
          posSum=posSum+arr[i];
        }
        else{
            negSum=negSum+arr[i];
        }
    }
    printf("%d ",posSum);
    printf("%d",negSum);
    return 0;
}