#include<stdio.h>

int tinhgaithua(int n ){
    int u = 1;
    for(int i = 2; i<= n ;i++){
        u *= i ;
    }
    return u ;
}
int tong(int n ){
    int sum = 0 ;
    for(int i = 1; i <= n ;i++){
        sum += i;
    }
    return sum;
}
int main(){
    printf("Tich gia thua cua 5 : %d\n",tinhgaithua(5));
    printf("Tong tu 1 den 10 : %d\n",tong(10));
    int u = tinhgaithua(5) - tong(10);
    if(u == 0)printf("Bang nhau");
    if(u < 0) printf("Tich giai thua cua 5 nho hon tong tu 1 den 10");
    if(u > 0) printf("Tich giai thua cua 5 lon hon tong tu 1 den 10");
    return 0;
}