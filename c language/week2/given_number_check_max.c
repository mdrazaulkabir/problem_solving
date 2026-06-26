// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int x,max=0;
//     for(int i=1; i<=n; i++){
//         scanf("%d",&x);
//         if(x>=max){
//             max=x;
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    // int x,min;     //eikhane eikar gurbage value astee pare 
    int x,min=INT_MAX; 
    for(int i=1; i<=n; i++){
        scanf("%d",&x);
        if(x<=min){
            min=x;
        }
    }
    printf("%d",min);
    return 0;
}