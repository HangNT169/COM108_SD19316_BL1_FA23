/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
// Khai bao thu vien 
void chucNang1(int soThuNhat,int soThuHai){
    double thuong = (1.0) * soThuNhat/soThuHai;
    printf("Thuong =  %lf\n",thuong);
}
void chucNang2(int chieuDai, int chieuRong){
    int chuVi = (chieuDai + chieuRong)*2;
    printf("Chu vi = %d\n",chuVi);
}
int main(){
    int menu;
    do{
        printf("\n---menu---");
        printf("\nchucNang1:");
        printf("\nchucNang2:");
        printf("\nchucNang3:");
        printf("\nMoi ban chon chuc nang:");
        scanf("%d",&menu);
        switch(menu){
            case 1:{
                printf("day la chuc nang 1\n ");
                int soMot;
                printf("Moi nhap so thu nhat:\n");
                scanf("%d",&soMot);
                int soHai;
                printf("Moi nhap so thu hai:\n");
                scanf("%d",&soHai);
                // goi lai ham
                chucNang1(soMot,soHai);
                break;   
            }
            case 2:{
                printf("day la chuc nang 2\n");
                int chieuDai;
                printf("Moi nhap so thu nhat:\n");
                scanf("%d",&chieuDai);
                int chieuRong;
                printf("Moi nhap so thu hai:\n");
                scanf("%d",&chieuRong);
                // goi lai ham
                chucNang2(chieuDai,chieuRong);
                break;
            }
            case 3:{
                printf("day la chuc nang 3");
                break;
            }
            default:{
                printf("chuc nang khong ton tai");
                break;
            }
        }
    }while(menu!=3);
    
    return 0;
}
