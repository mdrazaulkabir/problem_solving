#include<stdio.h>
#include<string.h>
int is_palindrome(char arr1[], int n2){
    int plindrome=1;

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