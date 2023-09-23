#include<stdio.h>
void show(int a){
    printf("HELLO %d\n",a);
}

int main(){
    int cnt = 3;
    while(cnt--){
    int a;
    scanf("%d",&a);
    show(a);
}
}