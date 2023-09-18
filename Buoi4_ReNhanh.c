/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    /**
     * 1. Nhập điểm toán, lý, hoá - số nguyên từ bàn phím.
     * In ra màn hình điểm trung bình cộng của 3 môn đấy
     * 2. Nhập vào 2 số nguyên. Tính tổng, hiệu, tích, thương
     * của 2 số đấy
     * 3. Nhập vào bán kính hình tròn - số nguyên. 
     * Tính chu vi, diện tích của hình tròn.
     * 4. Nhập vào cạnh hình vuông - số nguyên.
     * Tính chu vi, diện tích hình vuông
     * 5. Nhập vào 2 cạnh hcn.
     * Tính chu vi, diện tích của hcn
     */
    // int diemToan;
    // int diemLy;
    // int diemHoa;
    // printf ("moi nhap diemToan");
    // scanf ("%d", &diemToan) ; 
    // printf ("moi nhap diemLy") ; 
    // scanf ("%d",&diemLy); 
    // printf ("moi nhap diemHoa");
    // scanf ("%d",&diemHoa);
    // double diemTrungBinh=(1.0)*(diemToan+diemLy+diemHoa)/3 ;
    // printf ("diemTrungBinh=%lf", diemTrungBinh);
    // int soThuNhat ; 
    // int soThuHai ; 
    // printf ("moi nhap soThuNhat"); 
    // scanf ("%d",&soThuNhat);
    // printf ("moi nhap soThuHai");
    // scanf ("%d",&soThuHai);
    // int tong=soThuNhat+soThuHai ; 
    // printf ("tongla:%d",tong);
    // int hieu=soThuNhat-soThuHai;
    // printf ("hieula: %d",hieu);
    // int tich=soThuNhat*soThuHai;
    // printf ("tichla:%d",tich); 
    /**
     * Có 4 loại toán tử:
     *  - Toán tử so sánh: >,<,>=,<=,==(bằng)
     *  - Toán tử số học: +,-,*,/,%(lấy dư)
     *  - Toán tử logic : &&(AND - Cả 2 phải đúng),
     *                  ||(OR - 1 trong 2 phải đúng), 
     *                  !(NOT - Phủ định)
     *  - Toán tử gán : = , ++,--...
     **/
     // Rẽ nhánh - if...else :
     // Cú pháp:
    //  if(điều kiện){
    //      // code 
    //  }else if(diều kiện){
    //      // code 
    //  }....
    //  else{
    //      // code
    //  }
    // 1 điều kiện chỉ có duy nhất 1 if và 1 else
    // Có thể có nhiều else if ở giữa 
    // Luyện tập
    // 1. Nhập vào điểm thi môn C từ bàn phím.
    // In ra bạn pass môn hoặc không 
    // 2. Nhập số nguyên từ bàn phím.
    // Kiểm tra số đấy là số lớn hơn 5 hay nhỏ hơn 5 hay bằng 5
    // int diemC;
    // // B1: Nhap diem C tu ban phim
    // printf("Moi nhap vao diem C:");
    // scanf("%d",&diemC);
    // // B2: Kiem tra pass hoac fail 
    // if(diemC >=5){
    //     printf("Passs");
    // }else{
    //     printf("Fail");
    // }
    // B2: Nhap tua ban phim
    int number;
    printf("Moi nhap :");
    scanf("%d",&number);
    if(number >5){
        printf("Day la so >5");
    }else if(number == 5){
        printf("Day la so 5");
    }else{
        printf("Day la so <5");
    }
    return 0;
}
