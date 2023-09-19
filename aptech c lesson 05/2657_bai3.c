#include<stdio.h>
#include<math.h>
int main(){
    int a , b , c ;
    for( a = 200 ; a >= 0 ; a--){
        for(b = 100 ; b >= 0 ; b --){
            for(c = 40 ; c >= 0 ; c--){
                if(a*1 + b*2 + c*5 == 200){
                    printf("%d To 1000 , %d To 2000 , %d To 5000\n",a,b,c);
                }
            }
        }
    }
}