#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
        if(b==0){
            if(c!=0){
                printf("PT VN");
            }
        }
        else{
            float kq1 = -c/b;
            printf("%.2f",kq1);
        }
    }
    else{
        float denta = b*b - (4*a*c);
        if(denta==0){
            printf("Pt co nghien kep : x=%f",-b/2*a);
        }
        else if(denta>0){
            printf("Pt co 2 nghiem x1 = %f",(-b+sqrt(denta))/(2*a));
            printf("\nPt co 2 nghiem x2 = %f",(-b-sqrt(denta))/(2*a));
        }
        else{
            printf("PT Vn");
        }
    }
}