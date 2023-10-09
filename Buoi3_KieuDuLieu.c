#include <stdio.h>
int main(){
    
    // 1 Xuất dữ liệu ra màn hình (printf)
    // int => %d
    // long => %ld 
    // float => %f 
    // double => %ld 
    // char => %c,%s...
    // VD: In 1 bien co gia tri bang 5 
    // int number = 5;
    // int a = 6;
    // printf("Gia tri so = %d",number);
    // printf("\nGia tri so = %d",a);
    // printf("\naabc = %d , %d",number,a);
    int one = 5;
    int two = 4;
    int sum = one + two;
    printf("sum = %d",sum);
    int hieu = one - two;
    printf("\n%d-%d=%d",one,two,hieu);
    int tich = one * two;
    printf("\n%d*%d=%d",one,two,tich);
    // double thuong = (double)one/two;
    double thuong = (1.0)*one/two;
    printf("\n%d/%d=%lf",one,two,thuong);
    // Có 2 cách ép kiểu :
    // C1: Ép kiểu tường minh: (kiểu dữ liệu muốn ép) công thức 
    // C2: Ép kiểu ngầm : 1.0 * công thức 
    int dai = 2 ; 
    int rong = 3 ; 
    int chuvi = (dai + rong )* 2 ; 
    int dientich = dai*rong;
    printf (" chuvi=%d  ", chuvi);
    printf ("\ndientich=%d", dientich); 
    // Nhập dữ liệu từ bàn phím  => scanf
    // Cú pháp:
    // scanf("%kieu du lieu tuong ung",&ten bien);
    // Vd: Nhap 2 so nguyen tu ban phim. Tinh tong cua 2 so nguyen day
    // B1: Nhap 2 so nguyen 
    int soThuNhat;
    int soThuHai;
    printf("Moi nhap so nguyen thu nhat:");
    scanf("%d",&soThuNhat);
    printf("Moi nhap so thu hai:");
    scanf("%d",&soThuHai);
    //B2: Tinh tong 
    int tong = soThuNhat + soThuHai;
    printf("Tong 2 so = %d",tong);
    // Luyen tap trên lớp: 
    // 1. Nhap vao 2 so nguyen tu ban phim. 
    // Tinh chu vi, dien tich hinh chu nhat_
    // 2. Nhap vao canh hinh vuong tu ban phim. 
    // Tinh chu vi, dien tich hinh vuong
   
        
    
    return 0;

