#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int n ;int check = 1;
void showmenu(){
    printf("1. Nhập vào số nguyên N\n");
    printf("2. Tinh N!\n");
    printf("3. Tính tổng 1 -> N\n");
    printf("4. So sanh N! và tổng 1->N\n");
    printf("5. Thoát\n");
}
void input(){
    printf("Nhap so nguyen N : ");
    scanf("%d",&n); 
}
int giaithua(int n){
    int s = 1;
    for(int i = 2 ; i <= n ; i++){
        s *= i;
    }
    return s;
}
int tinhtong(int n){
    int sum = 0 ;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}
void compare(int a, int b){
    if(a==b)printf("N! bang tong tu 1 -> N\n");
    if(a>b)printf("N! lon hon tong tu 1 -> N\n");
    if(a<b)printf("N! nho hon tong tu 1 -> N\n");
}
void end(){
    printf("Chuong trinh ket thuc !");
}
int main(){
    int lenh;
    do{
        showmenu();
        scanf("%d",&lenh);
        switch(lenh){
            case 1 :
            input();break;
            case 2 : 
            printf("Ket qua cua N! : %d\n",giaithua(n));break;
            case 3 : 
            printf("Tong tu 1 den n la : %d\n",tinhtong(n));break;
            case 4 : 
            compare(giaithua(n),tinhtong(n));break;
            case 5 : 
            check = 0 ;end();break;
            default : 
            printf("Nhap sai vui long nhap lai\n");
        }
    }while(check == 1);
}
