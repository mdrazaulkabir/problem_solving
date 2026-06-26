// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=n-1; i>=0; i--){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


////two pointer technique
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k=0; k<n; k++){
        scanf("%d",&arr[k]);
    }
    for(int i=0,j=n-1; i<j; i++,j--){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
    }
    
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
     }

    return 0 ;
}
