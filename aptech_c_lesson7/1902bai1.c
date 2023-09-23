#include<stdio.h>
#include<math.h>
void showInfor(char name[],char age[],char address[],char email[],char phonenumber[]){
    printf("%s\n",name);
    printf("%s\n",age);
    printf("%s\n",address);
    printf("%s\n",email);
    printf("%s",phonenumber);
}
int main(){
    char a[] = {"Tran Tuan Phuc"};
    char c[] = {"20"};
    char d[] = {"Ha Noi"};
    char e[] = {"tranphhuc120203@gmail.com"};
    char f[] = {"078241****"};
    showInfor(a,c,d,e,f);

}