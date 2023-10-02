/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    /**
     * 1. In các số lẻ từ 1 - 10 
     * 2. In các số chẵn từ 0 - n với n là số nguyên dương nhập từ bàn phím
     * 3. Tính tổng các số từ 1 - 10 
     * 4. Tính tích các số từ 1 - 10
     * 5. Tính tổng các số lẻ từ 1 - 10 
     * 6. Tính tổng các số chẵn từ 1 - 10 
     * 7. Tính tổng các số lẻ từ 0 - n với n là số nguyên dương nhập từ bàn phím
     * 8. Liệt kê xem có bao nhiêu số chia hết cho 3 từ 1 - n với n là số nguyên dương nhập từ bàn phím
     * 9. Đếm xem có bao nhiêu số chia hết cho 3 và 5 từ 0 - n với n là số nguyên dương nhập từ bàn phím
     */
    /**
     * 1. In các số lẻ từ 1 - 10 
     * 2. In các số chẵn từ 0 - n với n là số nguyên dương nhập từ bàn phím
     */
   /* for (int i = 0 ; i <11 ; i ++){
        if (i%2!=0){
            printf ("\ncac so le la %d",i);
        }
    }*/
    
    // int n ;
    // printf ("\nmoi nhap vao n " );
    // scanf ("%d",&n);
    // for (int i = 0 ; i <n +1; i++){
    //     if (i%2==0){
    //         printf ("\ncac so chan la %d",i);
    //     }
    // }
    // Voi moi bai dem hoac tinh tong thi gan gia tri ban dau bang 0
    // int tong = 0; // 1+2+3+4+5+6+7+8+9+10 => tong + i 
    // // 1/1+1/2+1/3.. +1/n => (tong + 1/i)
    // for(int i = 1 ; i < 11 ;i++){
    //     tong= tong +i; // Cong thuc chung 
    //     // c2: tong+=i;
    // }
    // printf("Tong = %d",tong);
    // Nhap vao so n. Tinh tong day sau: 
    // 1/1+1/2+1/3+... +1/n
    // float tong = 0;
    // int n;
    // printf("Moi nhap vao n:");
    // scanf("%d",&n);
    // for(int i = 1; i< n+1 ;i++){
    //     tong+= 1.0/i;
    // }
    // printf("Tong = %f\n",tong);
     /* 4. Tính tích các số từ 1 - 5
     * 5. Tính tổng các số lẻ từ 1 - 10 
     * 6. Tính tổng các số chẵn từ 1 - 10 
     * 7. Tính tổng các số lẻ từ 0 - n với n là số nguyên dương nhập từ bàn phím
     * 8. Liệt kê xem có bao nhiêu số chia hết cho 3 từ 1 - n với n là số nguyên dương nhập từ bàn phím
     * 9. Đếm xem có bao nhiêu số chia hết cho 3 và 5 từ 0 - n với n là số nguyên dương nhập từ bàn phím
    */
    // int tich = 1;
    // for(int i = 1; i < 6; i++){
    //      tich *= i;
    // }
    //  printf("Tich la: %d\n",tich);
     
    // int tong = 0;
    // for(int i = 1; i < 11; i++){
    //      if(i % 2 != 0){
    //          tong += i;
    //      }
    //  }
    // printf("Tong la: %d",tong);
    // 2. while
    // Cu phap 
    // while(dieu kien){
    //     // Code
    //     // Dieu kien dung thi thuc hien doan code trong khoi lenh
    // }
    //1.In cac so tu 0 - 10 
    //2.In cac so chan tu 1 - 10 
    //3.Tinh tong cac so le tu 2 - 10
    // int i = 0; // Chay tu 0 -> 10 => Gan gia tri ban dau la 0 
    // while( i < 11){
    //     printf("%d\n",i);
    //     // tang buoc nhay
    //     i++;
    // }
    // int i= 1;
    // while ( i< 11){
    //     if( i%2==0){
    //         printf("%d\n",i);
    //     }
    //     i++;
    // }
    // int tong = 0;
    // int i=2;
    // while( i < 11){
    //     if(i%2==0){
    //       tong +=i ;
    //     }
    //     i++;
    // }
    // printf("tong la=a %d",tong);
    // do...while : Lam roi moi check 
    // do{
    //     // code    
    // }while(dieu kien);
    // Du dieu kien sai ngay lan dau => Luon luon co 1 lan chay vong lap 
    //1.In cac so tu 0 - 10 
    //2.In cac so chan tu 1 - 10 
    //3.Tinh tong cac so le tu 2 - 10
    // int i = 0;
    // do{
    //     // code
    //     printf("%d\n",i);
    //     i++;
    // }while(i < 11);
    int so=1;
    do{
        if(so%2==0){
            printf("%d",so);
        }
        so++;
        
    }while(so<11);
    return 0;
}
