


// void fun(int arr[]){ 
//     arr[0]=22;
// }

// #include<stdio.h>
// int main(){
//     int arr[]={2,3,4,5,6};
//     fun(arr);
//     // printf("%d",arr[0]);
//     for(int i=0 ; i<5; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }




// void fun(int* n){
//     printf("In function it value: %d\n",*n);
//     *n=100;
// }
// #include<stdio.h>
// int main(){
//     int x=10;
//     printf("%d\n",x);
//     printf("%p\n",&x);
    
//     int* prt;
//     prt=&x;
//     printf("%p\n",prt);
//     printf("%d\n",*prt);    //dereference 

//     fun(&x);
//     printf("%d\n",x);
//     printf("%p\n",&x);
//     return 0;
// }


void fun(int arr[]){
    arr[1]=22;
}
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    printf("%p\n",&arr[0]);
    fun(arr);

    for(int i=0; i<5; i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}