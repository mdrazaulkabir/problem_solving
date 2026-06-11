/*
=>amader fist e dekhte hobe koyta =>line print korte hobe
=>second koyta =>start print korte hobe 
=>third koyta space lagbe (zodi lage)

* 
* * 
* * * 

*/

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


// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int start=1;
//     int spaceStart=n-1;
//     for(int i=1; i<=n; i++){                 ///line print 
//         for(int k=spaceStart; k>=1; k--){    ///space print 
//             printf("  ");
//         }
//         spaceStart--;

//         for(int j=1; j<=start; j++){         ///start print   j<=i; amora ei condtion diye o korte partam but have one problem 
//             printf("* ");
//         }
//         start +=2;

//         printf("\n");
//     }
//     return 0;
// }





/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n>=0){
//         int start=1;
//         int space=n-1;
//         for(int i=1; i<=n; i++){
//             for(int l=space; l>=1; l--){
//             printf(" ");
//            }
//            space--;
//             for(int j=1; j<=start; j++){
//                 printf("*");
//             }
//             start+=2;
//             printf("\n");
//         }

//         for(int i=n-1; i>=1; i--){
//             for(int k=1; k<=n-i; k++){
//                 printf(" ");
//             }
//             for(int j=1; j<=i*2-1; j++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }










/*

    #
   ---
  #####
 -------
#########
 -------
  #####
   ---
    #

=>> eietar count hobe row onusare 
| Row | Count | Symbol |
| --- | ----- | ------ |
| 1   | 1     | #      |
| 2   | 3     | -      |
| 3   | 5     | #      |
| 4   | 7     | -      |
| 5   | 5     | #      |
| 6   | 3     | -      |
| 7   | 1     | #      |


| i | i%2!=0 | i/2==0 |   ==>>> eikhane divider and modulas different 
| - | ------ | ------ |
| 1 | True   | True   |
| 2 | False  | False  |
| 3 | True   | False  |
| 4 | False  | False  |
| 5 | True   | False  |

Outer variable → Inner loop থেকে access করা যায় ✅
Inner variable → Outer loop থেকে access করা যায় না ❌

 for(int i=1; i<=3; i++){      // outer

    for(int j=1; j<=3; j++){  // inner
        printf("%d %d\n", i, j);  // i এবং j দুটোই ব্যবহার করা যায়
    }
    printf("%d\n", i); // i ব্যবহার করা যায়
    // printf("%d\n", j); // ERROR
 }

*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=0){
        int start=1;
        int space=n-1;
        for(int i=1; i<=n; i++){
            for(int l=space; l>=1; l--){
            printf(" ");
           }
           space--;
            for(int j=1; j<=start; j++){
                if(i%2!=0){
                    printf("#");
                }
                else{
                    printf("-");
                }
            }
            start+=2;
            printf("\n");
        }


        for(int i=n-1; i>=1; i--){
            for(int k=1; k<=n-i; k++){
                printf(" ");
            }

            for(int j=1; j<=i*2-1; j++){
                if(i%2!=0){
                    printf("#");
                }
                else{
                    printf("-");
                }
            }
            printf("\n");
        }
    }
    return 0;
}