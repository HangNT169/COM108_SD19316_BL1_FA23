/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// float tinhTong(){
//   // tra ra kieu du lieu tuong ung 
//   return 1 bien float;
// }
// Ham void => Khong co return (Khong co kieu du lieu tra ve)
void tinhTong1(int soThuNhat,int soThuHai){
    int tong = soThuNhat + soThuHai;
    printf("Tong = %d\n",tong);
}
int tinhTong2(int soThuNhat,int soThuHai){
    int sum = 0;
    // Code 
    sum = soThuNhat + soThuHai;
    return sum;
}
int main(){
   /**
    * Ham => tach nho code 
    * Có 2 loại hàm :
    *   - Hàm không có kiểu trả về : Khong co return  => void (KHONG CAN RETURN)
    *   - Hàm có kiểu trả về: return 
    * Cú pháp hàm:
    *   kiểu trả về của hàm tên hàm (có thể có tham so truyền vào ){
            // code 
    }
    */
    // int number;
    // 1. Tinh tong 2 so nhap tu ban phim 
    // 2. Tinh tong 2 so nhap tu ban phim (tach ham 2 cach);
    int number1;
    printf("Nhap so 1:");
    scanf("%d",&number1);
    int number2;
    printf("Nhap so 2:");
    scanf("%d",&number2);
    // int sum = number1 +number2;
    // printf("Sum = %d\n",sum);
    // Cach goi ham 
    // tinhTong1(number1,number2);
    int s = tinhTong2(number1,number2);
    printf("Sum = %d\n",s);
    /**
     * Tao 1 menu gom cac chuc nang sau : Menu lap lai toi khi chon 3
     *  1. Tinh thuong 2 so nguyen nhap tu ban phim 
     *  2. Nhap 2 so nguyen tu ban phim. Tinh chuVi hinh chu nhat 
     *  3.Thoat
     */ 
    return 0;
}
