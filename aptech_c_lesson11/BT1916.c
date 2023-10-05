#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

typedef struct ST_tranhtheu{
    char ten[30],tacgia[30];
    int giaban, chieudai,chieurong;
}tranh;
tranh arr[3];
void showmenu();
void input();
void output();
void findprice();
void print();
void sort();
void save();
int choose;
int main(){
    do{
        showmenu();
        printf("CHon : ");
        scanf("%d",&choose);
        getchar();
        switch(choose){
            case 1 :
            input();
            break;
            case 2 :
            output();
            break;
            case 3 :
            findprice();
            break;
            case 4 :
            save();
            break;
            case 5 :
            printf("Chuong trinh ket thuc\n");
            break;
            default:
            printf("Nhap khong hop le vui long nhap lai\n");
            break;
        }
    }while(choose!=5);
}
void showmenu(){
    printf("1.Nhap danh sach cac buc tranh.\n");
    printf("2.Sap xep, thong ke va hien thi thong tin chi tiet cua tung buc tranh theo dien tich giam dan.\n");
    printf("3.Tim buc tranh co theo gia ban\n");
    printf("4.Ghi vao tap tin nhi phan tranhtheu.dat.\n");
    printf("5.Thoat.\n");    
}
void input(){
    for(int i = 0 ; i< 3 ; i++){
        printf("Nhap thong tin cho buc tranh so %d:\n",i+1);
        printf("Ten:");
        fflush(stdin);fflush(stdout);
        gets(arr[i].ten);
        printf("Tac gia :");
        fflush(stdin);fflush(stdout);
        gets(arr[i].tacgia);
        fflush(stdin);fflush(stdout);
        printf("Chieu dai :");
        fflush(stdin);fflush(stdout);
        scanf("%d",&arr[i].chieudai);
        printf("Chieu rong :");
        fflush(stdin);fflush(stdout);
        scanf("%d",&arr[i].chieurong);
        printf("Gia ban (USD) :");
        fflush(stdin);fflush(stdout);
        scanf("%d",&arr[i].giaban);
    }
}
void sort(){
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            int s1 = arr[i].chieudai * arr[i].chieurong;
            int s2 = arr[j].chieudai * arr[j].chieurong;
            if(s2 < s1){
                tranh tam = arr[i];
                arr[i] = arr[j];
                arr[j] = tam;
            }
        }
    }
}
void print(){
    for(int i = 1 ; i <= 69;i++){
        printf("=");
    }
    printf("\nDanh sach tranh\n");
    for(int i = 1 ; i <= 69;i++){
        printf("=");
    }
    printf("\n");
}
void output(){
    int lon = 0 ;
    int tb = 0;
    int nho = 0;
    sort();
    print();
    printf("%-3s||%-15s||%-10s||%-5s||%-5s||%-9s||%-10s\n","STT","TEN","Tac gia","Dai","Rong","Gia","Kho");
    for(int i = 0 ; i < 3 ; i++){
        int s = arr[i].chieudai * arr[i].chieurong;
        char kho[20];
        if(s <2000){strcpy(kho,"Nho");nho++;}
        if(s >= 2000 && s <10000){strcpy(kho,"Trung binh");tb++;}
        if(s >= 10000){strcpy(kho,"Lon");lon++;}
        printf("00%d||%-15s||%-10s||%-5d||%-5d||%-9d||%-10s\n",i+1,arr[i].ten,arr[i].tacgia,arr[i].chieudai,arr[i].chieurong,arr[i].giaban,kho);
    }
    for(int i = 1 ; i <= 69;i++){
        printf("=");
    }
    printf("\nThong ke:\n");
if(nho!=0)printf("+ Kho Nho co %d buc tranh\n",nho);
if(tb!=0)printf("+ Kho Trung binh co %d buc tranh\n",tb);
if(lon!=0)printf("+ Kho Lon co %d buc tranh\n",lon);
}

void findprice(){
    printf("Nhap gia ban toi da");
    int gia ;
    scanf("%d",&gia);
    int check = 0;
    for(int i = 0 ; i < 3 ; i++){
        if(arr[i].giaban<=gia){
           check ++;
           if(check ==1){print();printf("%-3s||%-15s||%-10s||%-5s||%-5s||%-9s||%-10s\n","STT","TEN","Tac gia","Dai","Rong","Gia","Kho");}
           int s = arr[i].chieudai * arr[i].chieurong;
           char kho[20];
           if(s <2000)strcpy(kho,"Nho");
           if(s >= 2000 && s <10000)strcpy(kho,"Trung binh");
           if(s >= 10000)strcpy(kho,"Lon");
           printf("00%d||%-15s||%-10s||%-5d||%-5d||%-9d||%-10s\n",i+1,arr[i].ten,arr[i].tacgia,arr[i].chieudai,arr[i].chieurong,arr[i].giaban,kho);
        }
    }
    if(check == 0){
        printf("Khong co buc tranh nao oi gia ban nhu vay\n");
    }
    else{for(int i = 1 ; i <= 69 ; i++){printf("=");}printf("\n");}
}
void save(){
    FILE *fp;
    fopen("tranhtheu.dat","wb");
    if(ferror(fp)){
        printf("Mo file bi loi\n");
    }
    else{
        fwrite(arr,sizeof(tranh),3,fp);
    }
    fclose(fp);
}