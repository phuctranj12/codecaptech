#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct book_st{
    char ten[30],theloai [30];
     int giatien,namxuatban;
}book;
book booklist[3];
void show();
void sort();
void showmenu();
void input();
void save();
void find();
int lenh;
int main(){
   do{
   showmenu();
   printf("Chon:");
   scanf("%d",&lenh);
   getchar();
   switch(lenh){
    case 1 : 
    input();
    break;
    case 2 :
    show();
    break;
    case 3 :
    find();
    break;
    case 4 :
    break;
    case 5 :
    printf("Ket thuc\n");
    break;
    default :
    printf("Nhap sai vui long nhap lai\n");
    break;
   }
   }while(lenh!=5);
}
void showmenu(){
   printf("1.Nhap du lieu cua tung quyen sach.\n");
   printf("2.Sap xep, hien thi thong tin chi tiet cua tung quyen sach theo the loai (Z->A). Thong ke sach theo nam xuat ban.\n");
   printf("3.Tim  quyen sach theo the loai\n");
   printf("4.Ghi vao tap tin nhi phan book.dat.\n");
   printf("5.Thoat.\n");
}
void sort(){
    for(int i = 0 ; i< 2 ; i++){
        for(int j = i+1; j < 3 ; j++){
            if(strcmp(booklist[i].ten,booklist[j].ten)<0){
                book tam = booklist[i];
                booklist[i] = booklist[j];
                booklist[j] = tam;
            }
        }
    }
}
void show(){
    int cnt[2023]={0};
    printf("%-3s||%-15s||%-15s||%-8s||%-15s","STT","Ten","THE Loai","Gia Tien","Nam xuat ban");
    printf("\n");
    sort();
    for(int i = 0 ; i < 3 ; i++){
        printf("00%d",i+1);
        printf("||%-15s||%-15s||%-8d||%-15d",booklist[i].ten,booklist[i].theloai,booklist[i].giatien,booklist[i].namxuatban);
        printf("\n");
        cnt[booklist[i].namxuatban]++;
    }
    for(int i = 0 ; i < 3 ; i++){
        if(cnt[booklist[i].namxuatban]!=0){
            printf("Nam %d co %d quyen sach",booklist[i].namxuatban,cnt[booklist[i].namxuatban]);
            cnt[booklist[i].namxuatban]=0;
            printf("\n");
        }
    }
}
void input(){
    for(int i = 0 ; i < 3 ; i++){
        printf("Nhap ten cho quyen sach thu %d : ",i+1);
        fflush(stdin);fflush(stdout);
        gets(booklist[i].ten);
        printf("Nhap the loai cho quyen sach thu %d : ",i+1);
        fflush(stdin);fflush(stdout);
        gets(booklist[i].theloai);
        printf("Nhap gia tien cho quyen sach thu %d : ",i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d",&booklist[i].giatien);
        printf("Nhap nam xuat ban cho quyen sach thu %d : ",i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d",&booklist[i].namxuatban);
    }
}
void find(){
    printf("Nhap the loai :");
    char o[30];
    gets(o);
    int tam = 0;
    for(int i = 0 ; i < 3 ; i++){
        int check = strcmp(o,booklist[i].theloai);
        if(check==0){
           if(tam!=1)printf("%-3s||%-15s||%-15s||%-8s||%-15s","STT","Ten","THE Loai","Gia Tien","Nam xuat ban");
           tam = 1;
           printf("\n");
           printf("00%d",i+1);
           printf("||%-15s||%-15s||%-8d||%-15d",booklist[i].ten,booklist[i].theloai,booklist[i].giatien,booklist[i].namxuatban);
           printf("\n");
        }
    }
}
void save(){
    FILE *fp;
    fp = fopen("book.data","wb");
    if(ferror(fp)){
        printf("Mo file bi loi");
    }
    else{
        fwrite(booklist,sizeof(book),3,fp);
    }
    fclose(fp);
}
