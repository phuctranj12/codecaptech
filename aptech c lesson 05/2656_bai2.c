#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 2 ; i<= sqrt(n); i++){
        if(n%i==0){
            printf("%d %d ",i,n/i);
        }
    }
    printf("%d",n);
}