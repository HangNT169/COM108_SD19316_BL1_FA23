/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     // 1. Tính tổng các số từ 0 - 10.
   // 2. Tính tổng các số từ 0 - 10 nhưng bỏ qua số 5 
   // 3. Tính tổng các số từ 0 - 10 nhưng nếu gặp số 5 thì dừng lại 
//   int tong=0;
//   for(int i=0;i<11;i++){
//       tong=tong+i;
      
//   }
//   printf("%d\n",tong);
    // int tong = 0;
    // for(int i = 0; i <11;i++){
    //     if(i!=5){
    //         // tinh tong 
    //         tong +=i;
    //     }
    // }
    // printf("%d\n",tong);
    // int tong = 0;
    // for(int i = 0; i <11;i++){
    //   if(i == 5){
    //       continue; // Bo qua voi vong lap i = 5
    //   }
    //   tong+=i;
    // }
    // printf("%d\n",tong);
     int tong = 0;
    for(int i = 0; i <11;i++){
    //   if(i<5){
    //       tong +=i;
    //   }
        if(i==5){
            break; // Dung lap vong lap
        }
        tong+=i;
    }
    printf("%d\n",tong);
    //  Vong lap mai mai 
    //  for(int i = 0;;i++){
         
    //  }
    //  while(true){
         
    //  }
    //  do{
         
    //  }while(true);
    /**
     * Tạo 1 menu gồm các chức năng sau. Menu chỉ dừng lại khi nhập 3.
     *      1. Tính tổng của 2 số nhập từ bàn phím.
     *      2. Tích tích của các số nguyên dương từ 1 - 10.
     *      3. Thoát.
     */
    int chucNang = 0;
    do{
        // Tao menu 
        printf("1.Tinh tong 2 so nhap tu ban phim\n");
        printf("2.Tinh tich cua cac so nguyen duong tu 1 - 10\n");
        printf("3.Thoat\n");
        printf("Moi nhap chuc nang:");
        scanf("%d",&chucNang);
        switch(chucNang){
            case 1:{
                int soM;
                int soH;
                printf(" Moi nhap so thu nhat:");
                scanf("%d",&soM);
                printf(" Moi nhap so thu hai:");
                scanf("%d",&soH);
                int tong = soM+soH;
                printf("tong la = %d\n",tong);
              break;  
            }
            case 2:{
                int tich = 1;
                for(int i = 1;i< 11;i+=1){
                    tich*=i;
                }
                printf("tich tu 1 den 10 la=%d",tich);
              break;  
            }
            case 3:{
              break;  
            }
            default:{
              break;  
            }
        }
    }while(chucNang!=3);
    /**
     * Tạo 1 menu làm các chức năng sau :Menu dừng lại khi nhập 0.
     *  1. Tính tổng hiêu tích thương của 2 số nhập từ bàn phím
     *  2. Nhập n là số nguyên dương từ bàn phím. 
     *      Tính tổng các số lẻ và chia hết cho 3 từ 0 - n 
     *  3. Nhập n là số nguyên dương từ bàn phím. 
     *      Tinh tích các số chẵn từ 1 - n.
     *  4. Nhập n là số nguyên dương từ bàn phím. 
     *      Đếm xem có bao nhiêu số chia hết cho 3 từ 0 - n
     *  0. Thoát
     */

    return 0;
}
