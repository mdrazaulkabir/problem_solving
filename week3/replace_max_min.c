#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
       scanf("%d",&arr[i]); 
    }
    int maxv=arr[0],minv=arr[0];
    int maxind=0,minind=0;
    for(int i=0; i<n; i++){
        if(arr[i]>=maxv){
            maxv=arr[i];
            maxind=i;
        }
        if(arr[i]<=minv){
            minv=arr[i];
            minind=i;
        }
    }

    int temp=0;
    temp=arr[maxind];
    arr[maxind]=arr[minind];
    arr[minind]=temp;

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}