#include<stdio.h>

int main(){
    char arr[10000];
    scanf("%s", arr);

    int temp[26] = {0};

    for(int i = 0; arr[i] != '\0'; i++){
        int val = arr[i] - 'a';
        temp[val]++;
    }

    for(int i = 0; i < 26; i++){
        if(temp[i] > 0){
            printf("%c - %d\n", i + 'a', temp[i]);
        }
    }

    return 0;
}