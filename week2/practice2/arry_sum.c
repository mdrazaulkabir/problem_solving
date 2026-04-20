#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    long long int arr[n];
    long long int sum=0;

    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
        sum += arr[i];
    }

    if(sum < 0){
        sum = -sum;
    }

    printf("%lld",sum);
    return 0;
}