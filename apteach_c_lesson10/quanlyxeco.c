#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef struct motorbike_st{
    char name[20],manufacturer[10], madein[12]; 
    long int price ;
}motorbike;
void showmenu();
void input();
void output();
void sort();
void find();
void save();
void end();
motorbike motorbikelist[3];
int lenh;
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
        output();
        break;
        case 3 :
        find();
        break;
        case 4 :
        save();
        break;
        case 5 :
        end();
        break;
        default:
        printf("Nhap sai vui long nhap lai\n");
    }
   }while(lenh!=5);
}
void showmenu(){
    printf("1.Input data of motorbike\n");
    printf("2.Sort, display details information and statistic of all  motorbikes\n"); 
    printf("3.Find the  motorbike  of manufacturer\n"); 
    printf("4.Save to text file motorbike.txt.\n"); 
    printf("5.Exit.\n");  
}
void input(){
    for(int i = 0 ; i < 3 ; i++){
    printf("Nhap ten cho xe thu %d : ",i+1);
    fflush(stdin);fflush(stdout);
    gets(motorbikelist[i].name);
    printf("Nhap ten hang xe : ");
    fflush(stdin);fflush(stdout);
    gets(motorbikelist[i].manufacturer);
    printf("Noi xuat xu : ");
    fflush(stdin);fflush(stdout);
    gets(motorbikelist[i].madein);
    printf("Nhap gia tien : ");
    fflush(stdin);fflush(stdout);
    scanf("%ld",&motorbikelist[i].price);
    }
}
void sort(){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = i + 1 ; j < 3 ; j++){
            if(strcmp(motorbikelist[i].manufacturer,motorbikelist[j].manufacturer)<0){
                motorbike tam = motorbikelist[i];
                motorbikelist[i] = motorbikelist[j];
                motorbikelist[j] = tam;
            }
        }
    }
}
void output(){
    printf("%-3s||%-8s||%-13s||%-10s||%-15s||\n","NO","Name","Manufacturer","Made In","Price");
    for(int i = 0 ; i < 3 ; i++){
        printf("00%d||%-8s||%-13s||%-10s||%-15ld||\n",i+1,motorbikelist[i].name,motorbikelist[i].manufacturer,motorbikelist[i].madein,motorbikelist[i].price);
    }
    int a[3] = {1,1,1};
    for(int i = 0 ; i < 2; i++){
        for(int j = i+1 ; j < 3 ; j ++){
            if(a[i]==0)continue;
            int check = strcmp(motorbikelist[i].manufacturer,motorbikelist[j].manufacturer);
            if(check == 0){
               a[i]++;
               a[j]--;
            }
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        if(a[i]!=0){
           printf("%s has %d motorbike\n",motorbikelist[i].manufacturer,a[i]); 
        }
    }
}
void find(){
    char o[10];
    printf("Manufacturer need to find : ");
    gets(o);
    int tam = 0;
    for(int i = 0 ; i < 3 ; i++){
        int check = strcmp(motorbikelist[i].manufacturer,o);
        if(check == 0 ){
            if(tam!=1)printf("%-3s||%-8s||%-13s||%-10s||%-15s||\n","NO","Name","Manufacturer","Made In","Price");
            tam = 1;
            printf("00%d||%-8s||%-13s||%-10s||%-15ld||\n",i+1,motorbikelist[i].name,motorbikelist[i].manufacturer,motorbikelist[i].madein,motorbikelist[i].price);
        }
    }
}
void save(){
    FILE *fp;
    fp = fopen("motorbike.txt","w");
    if(ferror(fp)){
        printf("Mo file bi loi");
    }
    else{
        fwrite(motorbikelist,sizeof(motorbike),3,fp);
    }
    fclose(fp);
}
void end(){
    printf("Ket thuc chuong trinh\n");
}