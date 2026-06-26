// /*

// * 
// * * 
// * * * 

// */

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int start=1;
//     for(int i=1; i<=n; i++){   //this is for the line print 
//         for(int j=1; j<=start; j++){ 
//             printf("* ");
//         }
//         start++;
//         printf("\n");
//     }
//     return 0;
// }


/*

* * * 
* * 
*

*/
// #include<stdio.h>
// int main(){
//     int n; 
//     scanf("%d",&n);
//     int strat=n;
//     for(int i=1; i<=n; i++){
//         for(int j=strat; j>=1; j--){
//             printf("* ");
//         }
//         strat--;
//         printf("\n");
//     }
//     return 0;
// }



/*

* * * 
* * 
*

*/
#include<stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    int strat=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            // printf("* ");
            printf("%d",strat);
            strat++;
        }
        // strat++;
        printf("\n");
    }
    return 0;
}