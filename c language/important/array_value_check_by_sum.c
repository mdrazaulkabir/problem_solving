#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter one number which is exist your arry!\n");
    int value;
    scanf("%d",&value);
    int flag=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]+arr[j]==value){
                printf("Yes value is exist!");
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("Your value is not exist!");
    }

    return 0;
}