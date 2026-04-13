// #include<stdio.h>
// int main(){
//     ///this problem quesetion given number will be 4 digit contian fist digit =>4343(even or odd)
//     int a;
//     scanf("%d",&a);
//     int d=a/1000;
//     if(d%2==0){
//         printf("EVEN");
//     }
//     else{
//         printf("ODD");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    ///this problem quesetion given number will be 4 digit contian last digit =>4343(even or odd)
    int a;
    scanf("%d",&a);
    int d=a%10;
    if(d%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}
