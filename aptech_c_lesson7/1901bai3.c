#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    gets(a);
    for(int i = 0 ; i < strlen(a);i++){
        if(a[i] != ' '){
            printf("%c\n",a[i]);
        }
    }
}