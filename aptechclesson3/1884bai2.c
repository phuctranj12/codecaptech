#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    long long tong =1;
    for(float i=2;i<=n;i++){
        int tam = i*i;
        tong+=tam;
    }
    printf("%lld",tong);
}