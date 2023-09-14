#include<stdio.h>
#include<math.h>
int main(){
    float n;
    scanf("%f",&n);
    float tong=0;
    for(float i=2;i<=2*n;i+=2){
        tong+=1/i;
    }
    printf("%f",tong);
}