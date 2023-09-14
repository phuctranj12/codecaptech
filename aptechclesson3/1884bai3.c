#include<stdio.h>
#include<math.h>
int main(){
   float n;
    scanf("%f",&n);
    float tong=1;
    for(float i=2;i<=n;i++){
        float tmp = 1/n;
        tong +=tmp;
    }
    printf("%f",tong);
}