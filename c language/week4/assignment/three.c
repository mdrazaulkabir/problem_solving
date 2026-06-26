#include<stdio.h>
int count_before_one(int arr2[],int n1){
    int count=0;
    for(int i=0; i<n1; i++){
            if(arr2[i]!=1){
                count++;
            }
            if(arr2[i]==1){
                break;
            }
    }
    return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int count2=count_before_one(arr, n);
     printf("%d ",count2);
    return 0;
}