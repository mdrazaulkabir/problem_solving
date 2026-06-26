/////tow pointer check technique 
////this cehck for int array 

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     int palindrome=1;
//     for(int i=0, j=n-1; i<j ; i++,j--){
//         if(arr[i]!=arr[j]){
//             palindrome=0;
//         }
//     }
//     if(palindrome){
//         printf("plindorme");
//     }
//     else{
//         printf("non plindrome");
//     }
//     return 0;
// }








//////string check

#include<stdio.h>
#include<string.h>
int is_palindrome(char arr1[], int n2){
    int plindrome=1;

/*
int n = strlen(arr); // n = 5
ami diyechilam j=n2-1      ////eit ahobe na karon amader array index 0 theke start hoy 
m a d a m
0 1 2 3 4
*/

    for(int i=0, j=n2-1; i<j ; i++,j--){
        if(arr1[i]!=arr1[j]){
            plindrome=0;
        }
    }
    return plindrome;
}

int main(){
    char arr[1000];
    scanf("%s",arr);
    int n= strlen(arr);
    int palindrome= is_palindrome(arr,n);
    if(palindrome){
        printf("plindorme");
    }
    else{
        printf("non plindrome");
    }
    return 0;
}