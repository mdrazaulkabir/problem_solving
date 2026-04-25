#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char s[10000];
        scanf("%s", s);

        int cap = 0, small = 0, digit = 0;

        for(int i = 0; s[i] != '\0'; i++){
            char ch = s[i];

            if(ch >= 'A' && ch <= 'Z'){
                cap++;
            }
            else if(ch >= 'a' && ch <= 'z'){
                small++;
            }
            else if(ch >= '0' && ch <= '9'){
                digit++;
            }
        }

        printf("%d %d %d\n", cap, small, digit);
    }

    return 0;
}