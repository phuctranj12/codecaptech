#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct ST_sinhvien
{
   char name[30], province [30]; int year;
 
}sv;
sv arr[3];
void showmenu();
void input();
void sort();
void output();
void findprovince();
void findminyear();
void save();
int choose;
int main(){
    do{
        showmenu();
        printf("Chon : ");
        scanf("%d",&choose);
        getchar();
        switch(choose){
            case 1 :
            input();
            break;
            case 2 :
            sort();output();
            break;
            case 3 :
            findminyear();
            break;
            case 4 :
            findprovince();
            break;
            case 5 :
            save();
            break;
            case 6 :
            printf("Chuong trinh ket thuc\n");
            break;
            default :
            printf("Nhap sai vui long nhap lai");
            break;
        }
    }while(choose != 6);
}
void showmenu(){
    printf("1.Nhập dữ liệu của từng sinh viên.\n");
    printf("2.Sắp xếp và hiển thị thông tin chi tiết của từng sinh viên theo thứ tự tăng dần của họ tên.\n");
    printf("3.Tìm sinh viên có tuổi nhỏ nhất\n");
    printf("4.Tìm sinh viên theo tỉnh.\n");
    printf("5.Lưu thông tin vào file student.txt.\n");
    printf("6.Exit\n");
}
void input(){
    for(int i = 0 ; i < 3 ; i++){
        printf("Nhap ten cua sinh vien thu %d: ",i+1);
        fflush(stdin);fflush(stdout);
        gets(arr[i].name);
        printf("Nhap tinh : ");
        fflush(stdin);fflush(stdout);
        gets(arr[i].province);
        printf("Nhap nam sinh : ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&arr[i].year);
    }
}
void sort(){
    for(int i = 0 ; i< 2 ; i++){
        for(int j = i+1 ; j < 3 ; j++){
            int c = strcmp(arr[i].name,arr[j].name);
            if(c > 0){
                sv tam = arr[i];
                arr[i] = arr[j];
                arr[j] = tam;
            }
        }
    }
}
void output(){
    for(int i = 0 ; i < 3; i++){
        printf("Sinh vien thu %d :\n",i+1);
        printf("Ho ten : %s\n",arr[i].name);
        printf("Tinh thanh : %s\n",arr[i].province);
        printf("Nam sinh : %d\n",arr[i].year);
    }
}
void findminyear(){
    int min = arr[0].year;
    int vt = 0;
    for(int i = 1 ; i < 3 ; i++){
        if(arr[i].year > min){
            min = arr[i].year;
            vt = i;
        }
    }
    printf("Sinh vien co tuoi nho nhat la :\n");
    printf("Ho ten : %s\n",arr[vt].name);
    printf("Tinh thanh : %s\n",arr[vt].province);
    printf("Nam sinh : %d\n",arr[vt].year);
}
void findprovince(){
     char o[30];
     printf("Nhap tinh :");
     fflush(stdin);fflush(stdout);
     gets(o);
     int tam = 0;
     for(int i = 0 ; i < 3 ; i++){
        int check = strcmp(arr[i].province,o);
        if(check == 0){
            tam = 1;
            printf("Ho ten : %s\n",arr[i].name);
            printf("Tinh thanh : %s\n",arr[i].province);
            printf("Nam sinh : %d\n",arr[i].year);
        }
     }
     if(tam == 0)printf("Khong co sinh vien nao thuoc tinh nay\n");
     }
void save(){
    FILE *fp;
    fp = fopen("student.txt","wb");
    if(ferror(fp)){
        printf("Mo phai bi loi\n");
    }
    else{
        fwrite(arr,sizeof(sv),3,fp);
    }
    fclose(fp);
}