#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct ST_rapchiephim{
       char name[25],address[35];
       int seat;
}cinema;
cinema cinemalist[4];
cinema *p;
int lenh;
void showmenu(){
    printf("1 . Nhap du lieu quan ly danh sach ra chieu phim\n");
    printf("2 . Hien thi danh sach rap chieu phim\n");
    printf("3 . Tim rap theo so ghe toi thieu\n");
    printf("4 . lu tru tep ra tep cinema.dat\n");
    printf("5 . Doc du lieu tu tep cinema.dat\n");
    printf("6 . Thoat\n");
    }
    void input(){
        for(int i = 0 ; i < 4 ; i++){
            printf("Nhap ten rap chieu phim thu %d : ",i+1);
            fflush(stdin);fflush(stdout);
            gets(cinemalist[i].name);
            printf("Nhap dia chi rap :");
            fflush(stdin);fflush(stdout);
            gets(cinemalist[i].address);
            printf("Nhap so luong ghe :");
            fflush(stdin);fflush(stdout);
            scanf("%d",&cinemalist[i].seat);
            p++;
        }
    }
void output(){
    for(int i = 0 ; i < 4 ;i++){
        printf("%s  ",cinemalist[i].name);
        printf("%s  ",cinemalist[i].address);
        printf("%d\n",cinemalist[i].seat);
    }
}
void sort(){
    for(int i = 0 ; i< 3 ; i++){
        for(int j = i+1 ; j < 4 ; j++){
            if(strcmp(cinemalist[i].name,cinemalist[j].name)>0){
                     cinema tam = cinemalist[i];
                     cinemalist[i] = cinemalist[j];
                     cinemalist[j] = tam; 
            }
    }
    }
    output();
}
void chonrap(){
    printf("NHap so ghe toi thieu");
    int a ; scanf("%d",&a);
    int check = 0;
    for(int i = 0 ; i < 4 ; i++){
        if(cinemalist[i].seat >= a){check = 1;
            printf("%s ",cinemalist[i].name);
            printf("%s ",cinemalist[i].address);
            printf("%d\n",cinemalist[i].seat);
        }
    }
if(check == 0)printf("Kong co rap nao phu hop\n");
}

void save(cinema* cinemalist){
     FILE* p= fopen("ciname.dat","wb");
     if(p == NULL){
        printf("khong the mo tep\n");
     }
     else {
        fwrite(cinemalist, sizeof(cinema), 4, p);
     }
     fclose(p);
}
void read(cinema*cinemalist){
    FILE* p= fopen("ciname.dat","rb");
     if(p == NULL){
        printf("khong the mo tep\n");
     }
     else {
        fread(cinemalist, sizeof(cinema), 4, p);
     }
     fclose(p);
}
void end(){
    printf("Chuong trinh ket thuc!\n");
}
int main(){
   do{
    showmenu();
    scanf("%d",&lenh);
    getchar();
    switch(lenh){
        case 1 : 
        input();
        break;
        case 2 :
        sort(); 
        break;
        case 3 :
        chonrap();
        break;
        case 4 : 
        save(cinemalist);
        break;
        case 5 : 
        read(cinemalist);
        break;
        case 6 :
        end();
        break;
        default:
        printf("Nhap sai vui long nhap lai\n");
        break;
    }
   }while(lenh != 6);
}