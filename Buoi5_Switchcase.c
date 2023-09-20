/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   /**
     * 1. Nhập vào 2 số nguyên từ bàn phím.
     * Tính tổng, hiệu, tích, thương của 2 số đấy
     * 2. Nhập vào 1 số nguyên .
     * Kiểm tra đây là số chẵn hay lẻ
     * 3. Nhập vào điểm toán, lý, hoá là số nguyên
     * Tính điểm trung bình của 3 môn toán lý hoá
     * và in ra sv loại nào:
     *      - Điểm TB <5 => Sinh viên Yếu
     *      - Điểm TB >=5 và < 7 => Sinh viên TB
     *      - Điểm TB >= 7 và <8 => SV Khá
     *      - Điểm TB >= 8 va < 9 => SV Giỏi
     *      - Điểm TB >=9 va <= 10 => SV Xuất sắc
     * 4. Nhập vào 3 số nguyên từ bàn phím. Tìm số lớn nhất trong 3 số
     * 5. Nhập vào 1 số nguyên => kiểm tra số nguyên đó là tháng nào trong năm
     */
    // B1:
    int soThuNhat;
    int soThuHai;
    printf("moi nhap so thu hai:");
    scanf("%d",&soThuNhat);
    printf("moi nhap soThuHai");
    scanf("%d",&soThuHai);
    int tong= soThuNhat+soThuHai;
    printf("tong=%d",tong);
    int tich=soThuNhat*soThuHai;
    printf("\ntich=%d",tich);
    int hieu =soThuNhat-soThuHai;
    printf("\nhieu=%d",hieu);
    float thuong=(float)soThuNhat/soThuHai;
    printf("\nthuong=%f",thuong);
    
    // B2:
    int soNguyen;
    printf(" Moi nhap so nguyen");
    scanf("%d",&soNguyen);
    if(soNguyen %2 == 0){
        printf(" La so chan");
    }else{
        printf(" La so le");
    } 
    
    // B3
    int diemToan;
    int diemLy;
    int dienHoa;
    printf(" Moi nhap diem toan");
    scanf("%d",&diemToan);
    printf(" Moi nhap dien ly");
    scanf("%d",&diemLy);
    printf(" Moi nhap dien hoa");
    scanf("%d",&dienHoa);
    float diemTrungBinh = (float)(diemToan+diemLy+dienHoa)/3;
    if(diemTrungBinh < 5){
        printf("SV yeu");
    }else if(diemTrungBinh >=5 && diemTrungBinh <7){
        printf("Sv TB");
    }else if(diemTrungBinh >=7 && diemTrungBinh <8){
        printf("sv kha");
    }else if(diemTrungBinh >=8 && diemTrungBinh <9){
        printf("sv Gioi");
    }else{
        printf("sv xx");
    }
    
    // B4:
      int soThuNhat;
    int soThuHai;
    int soThuBa;
    printf(" Moi nhap so 1");
    scanf("%d",&soThuNhat); // 8
    printf(" Moi nhap so 2");
    scanf("%d",&soThuHai); // 9
    printf(" Moi nhap so 3");
    scanf("%d",&soThuBa); // 3
    
    // Tao ra 1 max
    int max = soThuNhat; // 8 
    // Check gia tri cua max voi cac so con lai 
    if(max < soThuHai){ // 8 <9 
        max = soThuHai; // max = 9
    }
    if(max < soThuBa){
        max = soThuBa;
    }
    printf("Max = %d",max);
    
    // B5:
    // C1:
//     int thang;
  
//   printf("Moi nhap so thang:");
//   scanf("%d",&thang);
//   if(thang == 1){
//       printf("Day la thang mot");
//   }else if(thang == 2){
//       printf("Day la thang hai");
//   }else if(thang == 3){
//       printf("Day la thang ba");
//   }else if(thang == 4){
//       printf("Day la thang bon");
//   }else if(thang == 5){
//       printf("Day la thang nam");
//   }else if(thang == 6){
//       printf("Day la thang sau");
//   }else if(thang == 7){
//       printf("Day la thang bay");
//   }else if(thang == 8){
//       printf("Day la thang tam");
//   }else if(thang == 9){
//       printf("Day la thang chin");
//   }else if(thang == 10){
//       printf("Day la thang muoi");
//   }else if(thang == 11){
//       printf("Day la thang muoi mot");
//   }else if(thang == 12){
//       printf("Day la thang muoi hai");
//   }else{
//       printf("Khong ton tai thang nao");
//   }
  /**
     * switch case => dung cho dieu kien là 1 số cụ thể
     * if .. else => dùng cho điều kiện là khoảng 
     * Cú pháp :
     * switch(tên biến){
         case giá trị:{
             // Code
             break; // KẾT THÚC MỖI CASE LUÔN LUÔN LÀ BREAK
         }
         // CÓ THỂ CÓ NHIỀU CASE 
         // KẾT THÚC SWICH LUÔN LUÔN LÀ default
         // DEFAULT : CÁC TRƯỜNG HỢP CÒN LẠI 
         default:{
            // Các case còn lại
             break;
         }
     }*/
     // C2:
    int thang;
    printf("Moi nhap so thang:");
    scanf("%d",&thang);
    switch(thang){
        case 1:{
            printf("Day la thang mot");
            break;
        }
        // 12 case 
        default:{
            printf("Thang khong ton tai trong nam");
            break;
        }
    }
    return 0;
}
