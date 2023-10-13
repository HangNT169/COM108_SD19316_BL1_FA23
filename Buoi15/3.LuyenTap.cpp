/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int menu=0;
     do{
         printf("\nchuc nang 1:");
         printf("\nchuc nang 2:");
         printf("\nMoi chon chuc nang:");
         scanf("%d",&menu);
         switch(menu){
             case 1:{
                 printf("day la chuc nang 1");
                 fflush(stdin);
                 char ten[100];
                 printf("Nhap Ten:");
                 gets(ten);
                 char tuoi[100];
                 printf("Nhap Tuoi:");
                 gets(tuoi);
                 char diaChi[100];
                 printf("Nhap dia chi:");
                 gets(diaChi);
                 printf("ten=%s\n tuoi=%s\n diaChi=%s\n ",ten,tuoi,diaChi);
                 
                 break;
             }
             case 2:{
                 printf("day la chuc nang 2");
                 
                 int size;
                 int arr[100];
                 
                 printf("Moi nhap size: ");
                 scanf("%d",&size);
                 
                 printf("Moi nhap thong tin trong mang: ");
                 int tong = 0;
                 for(int i = 0; i <size;i++){
                    scanf("%d",&arr[i]);
                    
                 }
                 for(int i = 0; i <size;i++){
                    if(i %2!=0){
                        tong +=arr[i];
                    }
                 }
                 
                 printf("tong = %d",tong);
                 
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
