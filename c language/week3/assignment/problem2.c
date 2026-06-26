// #include<stdio.h>
// int main(){

//     int arrs;
//     scanf("%d",&arrs);
//     int n=100000;
//     if(1<=arrs || arrs<=n){
        
//         char s[arrs];
//         int conso=0;
//         for(int i=0; i<=arrs; i++){
//             scanf("%c",&s[i]);
//         }

//         for(int i=0; i<=arrs; i++){
//             // scanf("%d",&s[i]);
//             if(s[i]>='a' && s[i]<='z'){
//                 if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
//                     continue;
//                 }
//                 else{
//                      conso++;
//                 }
               
//             }
//         }
//         printf("%d ",conso);
//     }
//     return 0;
// }



#include<stdio.h>
int main(){

        int n=100000;
        
        char s[n];
        int conso=0;
         scanf("%s",s);

        for(int i=0; s[i]!='\0'; i++){
            if(s[i]>='a' && s[i]<='z'){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
                    continue;
                }
                else{
                     conso++;
                }
            }
        }
        printf("%d ",conso);
    return 0;
}
