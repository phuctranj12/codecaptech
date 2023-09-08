#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,f,e,x,y;
    a=1;
    b=c=d=e=f=a;
    x=pow(a,6)+b*c*d+e*f;
    y=pow(a,3)*pow(b,2)+a*b*d*e*f;
    printf("Gia tri cua x = %d\n",x);
    printf("Gia tri cua y = %d",y);

 return 0;    
}