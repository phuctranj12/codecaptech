#include<stdio.h>
#include<stdlib.h>

typedef struct ST_thongtin{
    char name[50],address[100],email[50],phonenumber[12];
     char age[2];
}infor;
int main(){
   infor arr[2];
   FILE *phuc;
   phuc = fopen("myinfor.txt","a");
   for(int i = 0 ; i < 2 ; i++){
    printf("Nhap ten cho nguoi thu %d :",i + 1);
    gets(arr[i].name);
    fflush(stdin);fflush(stdout);
    printf("Nhap tuoi cho nguoi thu %d:",i + 1);
    gets(arr[i].age);
    fflush(stdin);fflush(stdout);
    printf("Nhap dia chi : ");
    gets(arr[i].address);
    printf("Nhap email : ");
    fflush(stdin);fflush(stdout);
    gets(arr[i].email);
    printf("Nhap so dien thoai :");
    fflush(stdin);fflush(stdout);
    gets(arr[i].phonenumber);
   }
   for(int i = 0 ; i < 2 ; i++){
      fputs(arr[i].name,phuc);
      fputs(arr[i].age,phuc);
      fputs(arr[i].address,phuc);
      fputs(arr[i].email,phuc);
      fputs(arr[i].phonenumber,phuc);
   }
   fclose(phuc);
}