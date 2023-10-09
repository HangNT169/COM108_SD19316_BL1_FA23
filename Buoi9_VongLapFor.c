/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // in cac so tu 1-10
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("4");
    // printf("5");
    // printf("6");
    // printf("7");
    // printf("8");
    // printf("9");
    // printf("10");
    // Hang dong duoc lap di lap lai 
    // Vong lap 
    // Co 3 loai vong lap: while, do...while, for 
    // 1. for 
    // Cu phap
    // for(gia tri khoi tao;dieu kien;buoc nhay){
    //     // code 
    //     // => Doan code lap di lap lai
    // }
    // In cac so tu 0 -> 10 
    // for(){
        
    // }
    int i =0; // bien toan cuc 
    for(; i < 11;i++){
        // buoc nhay tang len 1 => i++
        printf("%d\n",i);
    }
    printf("Gia tri bien i la: %d\n",i);
    /**
     * Co 2 loai bien trong lap trinh:
     *  - Bien toan cuc : 
     *      Co gia tri toan bo trong file
     *  - Bien cuc bo: 
     *      Chi co gia tri trong vung duoc khai bap
     */
    // gia tri cua i chi duoc 
    // khoi tao 1 lan duy nhat tai vong lap dau tien 
    // In 1-> 50
    // for(int i = 1;i<51;i++){
    //     printf("%d\n",i);
    // }
    // BT:
    // 1. In cac so tu 0 - 10.
    // 2. In cac so tu 1 - 52 
    // 3. Nhap vao 1 so nguyen duong n.
    // In cac so tu 0 -> n 
    // 4. In cac so chan tu 0 -> 10 
    // 5. Nhap vao 1 so nguyen duong n.
    // In cac so le tu 0 -> n
    // for(int i = 0;i < 11;i++){
    //     printf("%d\n",i);
    // }
    // for(int i = 1;i < 51;i++){
    //     printf("%d\n",i);
    // }
    // 3. Nhap vao 1 so nguyen duong n.
    // In cac so tu 0 -> n 
    // int n;
    // printf(" \nMoi cac ban nhap so nguyen :");
    // scanf("%d",&n);
    // for(int i=0;i < n+1;i++){
    //     printf("%d",i);
    // }
    // // 3.1. Nhap vao 1 so nguyen duong n.
    // // In cac so tu 1 -> n 
    // int n;
    // printf(" Moi cac ban nhap so :");
    // scanf("%d",&n);
    // for(int i=1;i < n+1;i++){
    //     printf("%d",i);
    // }
    // 4. In cac so chan tu 0 -> 10 
    // for(int i=0;i<11;i++){
    //     if(i%2==0){
    //         printf("%d\n",i);
    //     }
    // }
     // for(int i=0;i<11;i++){
    //     if(i%2!=0){
    //         printf("%d\n",i);
    //     }
    // }
     // 4. In cac so chan tu 0 -> 10 
    // 0,2,4,6,8 
    // for(int i = 0 ;i < 11;i+=1){
    //     printf("%d\n",i);
    // }
    // Neu buoc nhay tang len 1 
        // C1: => i++ => Cu phap C++
        // C2: i = i+1;
        // C3: i+=1;
    // Neu buoc nhay giam len 1 
        // C1: => i-- => Cu phap C++
        // C2: i = i-1;
        // C3: i-=1;
    // Neu vs tang n don vi ( co the 2 , co the 3..)
        // C1: i=i+2;
        // C2: i+=2;
        // 5. Nhap vao 1 so nguyen duong n.
    // // In cac so le tu 0 -> n
    // printf ("moi nhap vao 1 so nguyen duong "); 
    // int soNguyen ; 
    // scanf ("%d",&soNguyen); 
    // // for (int n = 0;n < soNguyen+1; n++){
    // //     if (n%2!=0){
    // //         printf ("%d\n",n); 
    // //     }
    // // }
    // for(int i=1;i < soNguyen+1;i+=2){
    //     printf("%d\n",i);
    // }
    return 0;
}
