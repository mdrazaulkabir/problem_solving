// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

    
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n;j++){
//             if(arr[i]<arr[j]){
//                 //right value 
//             }
//             else{
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            // if(arr[i]<arr[j]){
            //     //right value 
            // }
            if(arr[i]>arr[j]){       ////eikhane just if er ulat condtion ta calaichi ze else modde dite cialm
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}