#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int *t;
    t = (int*) calloc(1000,sizeof(int));
    int dem = 0 ;
    int u ;
    int check =1;
    do{
        printf("1. Nhập vào N số nguyên\n");
        printf("2. Hiển thị danh sách các phần tử trong mảng\n");
        printf("3. Tính tổng các phần tử trong mảng\n");
        printf("4. Săp xếp các phần tử trong mảng theo thứ tự tăng dần\n");
        printf("5. Thoát\n");
        int lenh ;
        scanf("%d",&lenh);
        switch(lenh){
            case 1 :
            printf("So luong phan tu them vao mang la : ");
            int a ;scanf("%d",&a);
            for(int i = 0 ; i < a ; i++){
                printf("Nhap phan tu thu %d : ",dem + i);
                scanf("%d",t + dem + i);
            }
            dem += a;
            break;
            case 2 : 
            printf("Danh sach phan tu trong mang la : \n");
            for(int i = 0 ; i < dem ; i++){
                printf("%d ", *(t + i));
            }
            printf("\n");
            break;
            case 3 :
            u = 0;
            for(int i = 0 ; i < dem ; i ++){
                u += t[i];
            }
            printf("Tong cac phan tu trong manng la : %d\n",u);
            break;
            case 4 :
            for(int i = 0 ; i < dem - 1 ; i++){
                for(int j = i + 1 ; j < dem ; j++){
                    if(t[j] < t[i]){
                        int tam = t[i];
                        t[i] = t[j];
                        t[j] = tam;
                    }
                }
            }
            break;
            case 5 :
            printf("Ket thuc chuong tring \n");
            check = 0;
            break;
            default:
            printf("Lenh khong hop le vui long nhap lai :");
            break;
        }

    }while(check == 1);
}