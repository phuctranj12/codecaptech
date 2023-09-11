#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int tong = a +b;
    int tich = a * b;
    int hieu = a - b;
    int thuong = a/b;
    printf("%d\n%d\n%d\n%d",tong , tich , thuong, hieu);

}