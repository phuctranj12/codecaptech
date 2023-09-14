#include<stdio.h>
#include<math.h>
int main(){
    float n;
    scanf("%f",&n);
    float tong=1;
    for(float i=1;i<=n;i++){
        float tam = 1/((i*2)+1);
        tong+=tam;
    }
    printf("%f",tong);
}