#include<stdio.h>
int main(){
    // B1: In menu
    printf("Chuc nang 1\n");
    printf("Chuc nang 2\n");
    printf("Chuc nang 3\n");
    printf("Chuc nang 4\n");
    printf("Chuc nang 5\n");
    printf("Chuc nang 6\n");
    printf("Chuc nang 7\n");
    printf("Chuc nang 8\n");
    printf("Chuc nang 9\n");
    printf("Chuc nang 10\n");
    
    // B2: Nhap chuc nang 
    int chucNang;
    printf("Moi nhap chuc nang:");
    scanf("%d",&chucNang);
    
    // B3: Tao menu
    switch(chucNang){
       case 1 :{
           // code
           printf("Day la case 1\n");
           int number;
           printf("Moi nhap vao 1 so:");
           scanf("%d",&number);
           if(number % 2 == 0){
               printf("Day la so chan\n");
           }else{
               printf("day la so le\n");
           }
           break;
       } 
       case 2 :{
           // code
           printf("Day la case 2");
           int nam;
           printf(" Moi nhap nam:");
           scanf("%d",&nam);
           if (nam % 4 == 0){
               printf("Day la nam nhuan\n");
            }else{
               printf("Day la nam khong nhuan\n");
            }
           break;
       } 
       case 3 :{
           // code
           printf("Day la case 3");
           int thang ;
           printf ("\nmoi nhap vao 1 thang ");
           scanf ("%d",&thang);
           switch (thang){
               case 1:{
                   printf ("day la thang 1");
                   break;
               }
               case 2 :{
                   printf ("day la thang 2");
                   break;
               }
               case 3 :{
                   printf ("day la thang 3");
                   break ;
               }
               case 4 :{
                   printf ("day la thang 4");
                   break;
               }
               case 5 :{
                   printf ("day la thang 5");
                   break ;
               }
               case 6 :{
                   printf ("day la thang 6");
                   break;
               }
               case 7 :{
                   printf ("day la thang 7");
                   break ;
               }
               case 8 :{
                   printf ("day la thang 8 ");
                   break;
               }
               case 9 :{
                   printf ("day la thang 9 ");
                   break ;
               }
               case 10 :{
                   printf ("day la thang 10");
                   break;
               }
               case 11:{
                   printf ("day la thang 11");
                   break;
               }
               case 12 :{
                   printf ("day la thang 12");
                   break ;
               }
               default :{
                   printf ("thang khong hop le ");
                   break;
               }
           }
           break;
       } 
       case 4 :{
           // code
           printf("Day la case 4");
           break;
       } 
       case 5 :{
           // code
           printf("Day la case 5");
           break;
       } 
       case 6 :{
           // code
           printf("Day la case 6");
           break;
       } 
       case 7 :{
           // code
           printf("Day la case 7");
           break;
       } 
       case 8 :{
           // code
           printf("Day la case 8");
           break;
       } 
       case 9 :{
           // code
           printf("Day la case 9");
           break;
       } 
       case 10 :{
           // code
           break;
       } 
       default:{
           printf("Chuc nang khong ton tai");
           break;
       }
       
    }
    return 0;
}