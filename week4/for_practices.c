#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int maxValue=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>=maxValue){
            maxValue=arr[i];
        }
    }
    // printf("%d",maxValue);
    // int temp[maxValue]={0}    //eikhane initiallize korte parbe na karon,, initial kora zay tokhonoi //zokhon zokhon fixed size thake kintu eikhane ami dynamically change hoiye aste pare 

    
    int temp[maxValue+1];
     for(int i=0; i<maxValue+1; i++){
        temp[i]=0;
     }
     for(int i=0; i<n; i++){
       int val=arr[i];
       temp[val]++;
    }
    
    for(int i=0; i<maxValue+1; i++){
       if(temp[i]>0){
        printf("%d- %d\n",i,temp[i]);
       }
    }
     
    return 0;
}