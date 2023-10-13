/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // B2: Nhap ten cua ban than va in ra man hinh
    // char name; // chua duoc 1 ky tu 
    // printf("Moi nhap ten:");
    // scanf("%c",&name);
    // printf("Name = %c\n",name);
    // => Chi co the lay duoc chu cai(ky tu dau tien) 
    // Xau ki tu=> Mang gom cac phan tu co kieu du lieu la char 
    // char name[100]; // %s 
    // printf("Moi nhap ten:");
    // scanf("%s",name); // Rieng voi %s => KHONG CO VA (&)
    // printf("Name = %s\n",name);
    // // %s => Khi gap khoang trang => Khong doc duoc nua
    // // C1: Doc toan bo ke ca khoang trang => su dung %[^\n]
    // // scanf("%[^\n]",name); // regex 
    // // C2:Dung ham cua chuoi
    // gets(name);
    // printf("Name = %s\n",name);
    // B1: Nhap ten, dia chi, que quan cua hang xom va in ra man hinh
    // B2: Nhap chieu cao, can nang, ky hoc cua ban than va in ra man hinh 
    // B3: Nhap ten, loai, can nang, dia chi, khu vuc song cua dong vat cua nyc va in ra man hinh 
     // B1: Nhap ten, dia chi, que quan cua hang xom va in ra man hinh
    char name[100];
    char diachi[100];
    char quequan[100];
    printf("Nhap vao ten la: ");
    gets(name);
    printf("Nhap vao dia chi la: ");
    gets(diachi);
    printf("Nhap vao que quan la: ");
    gets(quequan);
    printf("Ten la: %s\n",name);
    printf("Dia chi la: %s\n",diachi);
    printf("Que quan la: %s\n",quequan);
     // B2: Nhap chieu cao, can nang, ky hoc cua ban than va in ra man hinh 
    int chieuCao;
    printf("moi nhap chieu cao:");
    scanf("%d",&chieuCao);
    float canNang;
    printf("moi nhap can nang:");
    scanf("%f",&canNang);
    int kyHoc;
    printf("moi nhap ky hoc:");
    scanf("%d",&kyHoc);
    printf("chieu cao = %d",chieuCao);
    printf("can nang = %f",canNang);
    printf("ky hoc = %d",kyHoc);
    return 0;
}
