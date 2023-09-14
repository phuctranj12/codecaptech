#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    if(a==0){
        if(b!=0){
           printf("PT VN");
        }
        else{
            printf("PT VSN");
        }
    }
    else{
        float kq=-b/a;
        printf("Pt co nghiem la x = %.2f",kq);
    }
}