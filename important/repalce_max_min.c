/*
ধরো input:
n = 3
arr = {5, 6, 7}
তাহলে:
maxv = 0 → ঠিক আছে (সবই ≥ 0)
minv = 0 → ❌ problem

if(arr[i] <= minv)
কোনো element-ই <= 0 না
তাই minind কখনো assign হবে না

Short Summary:
❌ minind assign না হলে → garbage index → segmentation fault
❌ minv=0 risky
✅ সবসময় arr[0] দিয়ে initialize করো
 
so amader always arry thee arr[0];
mane fist index er value ta nite hobe right

*/

#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
       scanf("%d",&arr[i]); 
    }
    int maxv=arr[0],minv=arr[0];
    int maxind=0,minind=0;
    for(int i=0; i<n; i++){
        if(arr[i]>=maxv){
            maxv=arr[i];
            maxind=i;
        }
        if(arr[i]<=minv){
            minv=arr[i];
            minind=i;
        }
    }

    int temp=0;
    temp=arr[maxind];
    arr[maxind]=arr[minind];
    arr[minind]=temp;
    // printf("%d %d\n",maxv,minv);
    // printf("%d %d\n",arr[maxind],arr[minind]);
    // printf("%d %d\n",maxind,minind);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}