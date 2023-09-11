#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    long long tong = (n+1)*n/2;
    printf("Tổng các số từ 1 đến N là :");
    printf("%lld",tong);
}