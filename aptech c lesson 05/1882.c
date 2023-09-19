#include<stdio.h>
#include<math.h>
int main(){
    printf("1. Nhập thông tin sinh viên\n");
    printf("2. Hiển thị thông tin sinh viên\n");
    printf("3. Kết thúc chương trình\n");
    while(1){
        
        char name[100] , age[100] , address[100] , email[100] , sex[100] , phonenumber[100];  
        int lenh;
        scanf("%d",&lenh);
        getchar();
        switch(lenh){
            case 1 :
            gets(name) ; gets(age) ; gets(address) ; gets(email) ; gets(sex) ;gets(phonenumber);
            break;
            case 2 :
            printf("Ten : %s\n",name);
            printf("Tuoi : %s\n",age);
            printf("Dia chi : %s\n",address);
            printf("email : %s\n",email);
            printf("Gioi thinh : %s\n",sex);
            printf("Sdt : %s\n",phonenumber);
            break;
            case 3 :
            break;
            default : 
            printf("Lenh khong hop le vui long nhap lai");
        }
        if(lenh == 3)break;
        printf("1. Nhập thông tin sinh viên\n");
        printf("2. Hiển thị thông tin sinh viên\n");
        printf("3. Kết thúc chương trình\n");
        }
}