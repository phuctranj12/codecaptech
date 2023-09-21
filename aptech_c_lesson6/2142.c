#include<stdio.h>
#include<math.h>
int main(){
    printf("1. Nhập vào số nguyên x => thêm vào mảng dataList\n");
    printf("2. Sắp xếp theo thứ tự tăng dần\n");
    printf("3. Tìm kiếm phần tử trong mảng\n");
    printf("4. Xoá phần tử trong mảng\n");
    printf("5. Hiển thị \n");
    printf("6. Thoát\n");
    int lenh ,datalist[100]; 
    int cnt = 0 ;
    while(1){
        scanf("%d",&lenh);
    switch(lenh){
        case 1 :
        printf("Nhap vao bien x : ");
        scanf("%d",&datalist[cnt]);
        cnt++;
        break;
        case 2 :
        if(cnt==0)printf("Khong co phan tu nao trong mang\n");
        if(cnt == 1) printf("%d",datalist[0]);
        else {
            for(int i = 0 ; i <= cnt-2;i++){
                for(int j = i+1; j<= cnt-1;j++ ){
                    if(datalist[j]<datalist[i]){
                        int tam = datalist[i];
                        datalist[i] = datalist[j];
                        datalist[j] = tam;
                    }
                }
            }
            printf("Cac phan tu trong mang da duoc sap xep la:\n");
            for(int i = 0 ; i<= cnt-1;i++){
                printf("%d ",datalist[i]);
            }
            printf("\n");
        }
        break; 
        case 3 :
        printf("Nhap vao so can tim trong mang :");
        int a;
        scanf("%d",&a);
        int dem = 0 ;
        for(int i = 0 ; i< cnt ;i++){
            if(datalist[i] == a)dem++;
        }
        printf("So luong cua so %d : %d so\n",a,dem);
        break; 
        case 4 : 
        printf("So can xoa la :");
        int b;
        scanf("%d",&b);
        int dem2 = 0;
        for(int i = 0; i< cnt ; i++){
            if(datalist[i] == b){
                dem2++;
            }
            else{
                datalist[i-dem2] = datalist[i];
            }
        }
        cnt -=dem2;
        break;
        case 5 : 
        printf("Cac phan tu trong mang la:\n");
            for(int i = 0 ; i<= cnt-1;i++){
                printf("%d ",datalist[i]);
            }
            printf("\n");
        break;
        case 6 :
        break;
    }
    if(lenh==6){printf("Ket thuc chuong trinh");break;}
    }
}   