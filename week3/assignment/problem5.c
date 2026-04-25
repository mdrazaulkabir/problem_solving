// #include<stdio.h>
// int main(){
//     int t; 
//     scanf("%d",&t);
//     while(t--){
//         int a,b,c; 
//         scanf("%d%d%d",&a,&b,&c);
//         int n=(a*c)/(a+b);
//         printf("%d\n",c-n);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int m1,m2,d;
        scanf("%d%d%d",&m1,&m2,&d);

        int total_work = m1 * d;
        int new_days = total_work / (m1 + m2);

        printf("%d\n", d - new_days);
    }

    return 0;
}