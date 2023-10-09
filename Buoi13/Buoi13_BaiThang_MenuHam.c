/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void chucNang2(int soNguyen){
    switch(soNguyen){
        case 1:{
            printf("day la thang 1\n");
            break;
        } 
        case 2:{
            printf("day la thang 2\n");
            break;
        } 
        case 3:{
            printf("day la thang 3\n");
            break;
        } 
        case 4:{
            printf("day la thang 4\n");
            break;
        } 
        case 5:{
            printf("day la thang 5\n");
            break;
        } 
        case 6:{
            printf("day la thang 6\n");
            break;
        } 
        case 7:{
            printf("day la thang 7\n");
            break;
        } 
        case 8:{
            printf("day la thang 8\n");
            break;
        } 
        case 9:{
            printf("day la thang 9\n");
            break;
        } 
        case 10:{
            printf("day la thang 10\n");
            break;
        } 
        case 11:{
            printf("day la thang 11\n");
            break;
        } 
        case 12:{
            printf("day la thang 12\n");
            break;
        } 
        default:{
            printf("thang khong ton tai\n");
            break;
        }
    }
}

int main()
{
//     Tạo 1 menu gồm các chức năng sau. Menu lặp lại tới khi chọn 0.
//         1. Nhập vào 2 số nguyên. Tính tổng, hiệu tích thương của 2 số đấy
//         2. Nhập vào 1 số nguyên. Kiểm tra đây là tháng nào trong năm
//         3. Nhập vào 1 số nguyên n. Tính tổng các số lẻ từ 0-n.
//         4. Nhập vào 1 số nguyên n. Đếm xem có bao nhiêu số nguyên chia hết cho 3 từ 0 - n.
//         5. Nhập vào 1 số nguyên n. Kiểm tra từ 0 - n có xuất hiện số chia hết cho 3 hay không ?
//         6. Nhập vào 1 số nguyên n. Tính tích của các số từ 1 - n.
//         0. Thoát
// Tách hàm
    int chucNang;
    do{
        printf("1. Chuc nang 1\n");
        printf("2. Chuc nang 2\n"); 
        printf("3. Chuc nang 3\n"); 
        printf("4. Chuc nang 4\n"); 
        printf("5. Chuc nang 5\n"); 
        printf("6. Chuc nang 6\n"); 
        printf(" 0. thoat\n");
        printf("Moi nhap chuc nang: ");
        scanf(" %d", &chucNang);
        switch ( chucNang){
            case 1:{
                printf("Day la chuc nang 1\n");
                break;
            }
            case 2:{
                int thang;
                printf("Moi nhap thang:");
                scanf("%d",&thang);
                chucNang2(thang);
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                break;
            }
            case 0:{
                
                break;
            }
            default:{
                break;
            }
            
        }
      
      
      
       
    }while( chucNang!= 0);

    return 0;
}
