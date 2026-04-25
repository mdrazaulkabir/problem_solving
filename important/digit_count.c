// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d",&arr[i]);
//     }
    
//     int count0=0,count1=0, count2=0, count3=0,count4=0,count5=0,count6=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==0){
//             count0++;
//         }
//         else if(arr[i]==1){
//             count1++;
//         }
//         else if(arr[i]==3){
//             count2++;
//         }
//          else if(arr[i]==3){
//             count3++;
//         }
//         else if(arr[i]==4){
//             count4++;
//         }
//          else if(arr[i]==5){
//             count5++;
//         }
//         else if(arr[i]==6){
//             count6++;
//         }
//     }

//     printf("%d - %d\n",0,count0);
//     printf("%d - %d\n",1,count1);
//     printf("%d - %d\n",2,count2);
//     printf("%d - %d\n",3,count3);
//     printf("%d - %d\n",4,count4);
//     printf("%d - %d\n",5,count5);
//     printf("%d - %d\n",6,count6);
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d",&arr[i]);
//     }
//     /*temp[6] => eikhane most important ze, ei size ta tumar arry value zokhon nibe, 
//     tokhon oi (max number +1) ta dite hobe ,,mone kore tmi 10 size er ekta arry nila tokhon
//     oi arry te max nubmer 6 hote hobe (zoto max hobe tar sate 1 add (maxNumber+1) kore nite hobe karon toto 
//     porzonto tumar temp arry colbe)
//     like arr[10]={1 2 3 4 5 0 2 3 5 6}
//     */
//     int temp[6+1]={0};    ///vvi eikhane size 7 mane index 6 tai nibe tai 1 add kore nite hoy = 0 to 6
//     for (int i = 0; i < n; i++)
//     {
//         int val=arr[i];
//         temp[val]++;
//     }
//     for(int i=0; i<=6; i++){
//             printf("%d - %d\n",i,temp[i]);
//     }

//     return 0;
// }





#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    
    int maxn=0;
    for(int i=0; i<n; i++){
        if(arr[i]>=maxn){
            maxn=arr[i];
        }
    }

    // printf("%d",maxn);
    /*temp[6] => eikhane most important ze, ei size ta tumar arry value zokhon nibe, 
    tokhon oi (max number +1) ta dite hobe ,,mone kore tmi 10 size er ekta arry nila tokhon
    oi arry te max nubmer 6 hote hobe (zoto max hobe tar sate 1 add (maxNumber+1) kore nite 
    hobe karon toto porzonto tumar temp arry colbe)
    like arr[10]={1 2 3 4 5 0 2 3 5 6}
    */

    // int temp[maxn+1]={0}; ///no tossible because => only fixed size array → {0} দিয়ে initialize 
    int temp[maxn+1];
    for(int i=0; i<=maxn; i++){
        temp[i]=0;
    }


    for (int i = 0; i < n; i++)
    {
        int val=arr[i];
        temp[val]++;
    }
    // for(int i=0; i<=maxn; i++){
    //         printf("%d - %d\n",i,temp[i]);
    // }
     for(int i=0; i<=maxn; i++){
        if(temp[i]>0){
         printf("%d - %d\n",i,temp[i]);
        }
    }
    return 0;
}