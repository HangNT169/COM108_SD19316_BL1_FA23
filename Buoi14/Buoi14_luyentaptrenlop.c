/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    /**
     * Nhập 1 mảng số nguyên gồm n phần tử với n nhập từ bàn phím. 
     *      Thực hiện các việc sau:
     *   1. In các phần tử trong mảng 
     *   2. Tính tích các phần tử trong mảng
     *   3. Tính tổng các phần tử chẵn trong mảng
     *   4. Tính tích các phần tử ở vị trí lẻ trong mảng
     *   5. Tinh tong cua cac phan tu chan o vi tri le trong mang 
     * if(i % 2 !=0 && arr[i] %2 ==0)
     */ 
     int size;
     int arr[100];
     printf("Moi nhap size:");
     scanf("%d",&size);
     printf("Moi nhap cac gia tri:");
     for(int i=0;i<size;i++){
         scanf("%d",&arr[i]);
     }
     printf("\ncac gia tri la");
     for(int i=0;i<size;i++){
         printf("%d",arr[i]);
     }
     int tich = 1;
     for(int i=0;i<size;i++){
         tich*=arr[i];
     }
     printf("tich cac gia tri la:%d\n",tich);
     int tong=0;
     for(int i =0;i<size;i++){
         if(arr[i]%2==0){
             tong+=arr[i];
         }
     }
     printf("tong la %d\n",tong);
     int tichLe=1;
     for(int i=0;i<size;i++){
         if(i%2!=0){
             tichLe*=arr[i];
         }
     }
     printf("tich le la=%d\n",tichLe);
    return 0;
}
