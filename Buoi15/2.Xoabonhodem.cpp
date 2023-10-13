/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    // // B3: Nhap ten, loai, can nang, dia chi, khu vuc song cua dong vat cua nyc va in ra man hinh 
    // char name[100];
    // printf(" Moi nhap ten: ");
    // gets (name);
    
    // char loai[100];
    // printf("Moi nhap loai: ");
    // gets ( loai);
    
    // float canNang;
    // printf("Moi nhap can: ");
    // scanf("%f", &canNang);
    // // Loi xay ra la do phim enter . Khi nhap so thi con nhap phim enter de xuong dong 
    // // phi enter => ki tu => an vao gia tri cua bien dang sau.
    // // Xoa bo nho dem
    // fflush(stdin); // Xoa bo nho 
    // char diaChi[100];
    // printf("Moi nhap dia chi: ");
    // gets(diaChi);
    
    // char khuVuc[100];
    // printf("Moi nhap khu vuc: ");
    // gets(khuVuc);
    
    // printf(" ten : %s", name);
    // printf(" loai: %s", loai);
    // printf(" can nang: %f", canNang);
    // printf(" dia chi: %s", diaChi);
    // printf(" khu vuc: %s", khuVuc);
    
    // /**
    //  * Tao menu . Chuc nang lap lai toi khi chon 0 
    //  *  1. Nhap ten, tuoi, dia chi cua ban than va in ra man hinh
    //  *  2. Nhap 1 mang so nguyen gom n phan . Tinh tong cac so nguyen o vi tri le trong mang
    //  *  0. Thoat
    //  */ 
     int menu=0;
     do{
         printf("\nchuc nang 1:");
         printf("\nchuc nang 2:");
         printf("\nMoi chon chuc nang:");
         scanf("%d",&menu);
         switch(menu){
             case 1:{
                 printf("day la chuc nang 1");
                 break;
             }
             case 2:{
                 printf("day la chuc nang 2");
                 break;
             }
             case 0:{
                 printf("enter de thoat");
                 break;
             }
             default :{ 
                 printf("chuc nang khong ton tai");
                 break;
             }
         }
     }while(menu!=0);
    return 0;
}
