// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int start=1;
//     for(int i=0; i<6; i++){
//         for(int j=0; j<start; j++){
//             printf(" *");
//         }
//         start+=2;
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int width = n + 10;          // tree-এর সবচেয়ে নিচের row-এর width
    int rows = (n + 11) / 2;     // উপরের অংশের row সংখ্যা

    // Tree top
    for (int i = 1; i <= rows; i++)
    {
        int stars = 2 * i - 1;
        int spaces = (width - stars) / 2;

        for (int j = 0; j < spaces; j++)
            printf(" ");

        for (int j = 0; j < stars; j++)
            printf("*");

        printf("\n");
    }

    // Tree trunk
    int trunkSpaces = (width - n) / 2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < trunkSpaces; j++)
            printf(" ");

        for (int j = 0; j < n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}