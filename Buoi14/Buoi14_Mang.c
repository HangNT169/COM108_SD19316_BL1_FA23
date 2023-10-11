/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    /**
     * Mang la tap hop cua cac phan tu cung kieu du lieu
     * VD: Tap N, N*...
     * VD: 
     *  gia tri: 5 7 9 -1 6 
     *  vi tri:  0 1 2  3 4 
     * Tong cac phan tu trong mảng : size (n)
     * Phần tử đầu tiên luôn luôn ở vị trí: 0.
     * Phần tử cuối cùng luôn luôn ở vị trí : n - 1
     * Mảng :(a)
     *  - giá trị :
     *  - vị trí :
     * Giá trị ở vị trí thứ 2: a[2] = 9 
     * Giá trị ở vị trí đầu tiên - 0: a[0] = 5
     * Giá trị ở vị trí cuối cùng - (n-1) : a[n-1] = 6 
     * Vị trí i bất kì => Giá trị của vị trí i : a[i]
     */ 
     // B1: Nhap 1 mang so nguyen gom n phan tu voi n nhap tu ban phim. 
     // In thong tin cua mang do ra man hinh.
     // B2: Nhập 1 mảng sô nguyên gồm n phần tử với n nhập từ bàn phím.
     // Tính tổng của các phần tử trong mảng
    // int size;
    // int arr[100]; // Luon luon khai bao mang nhu nay.
    // // B1: Moi nhap size
    // printf("Moi nhap size:");
    // scanf("%d",&size);
    // // B2: Nhap thong tin vao mang 
    // printf("Moi nhap cac phan tu trong mang:");
    // for(int i = 0 ; i <size ;i++){
    //     scanf("%d",&arr[i]);
    // }
    // // B3: In cac phan tu trong mang 
    // printf("In cac phan tu trong mang:");
    // for(int i = 0; i < size ;i++){
    //     printf("%d\n",arr[i]);
    // }
    // B2:
    int size;
    int arr[100];
    printf("moi nhap size:");
    scanf("%d",&size);
    printf("Nhap cac phan tu trong mang:");
    for(int i = 0; i< size;i++){
        scanf("%d",&arr[i]);
    }
    // printf("in cac phan tu trong mang");
    // for(int i =0; i< size;i++){
    //     printf("%d",arr[i]);
        
    // }
    int tong = 0;
    for(int i = 0 ;i < size ;i++){
        tong+=arr[i];
    }
    printf("Sum = %d\n",tong);
    return 0;
}
