#include<stdio.h>

int main() {
   int arr[]; // khai báo mảng
   int size; // kích thước mảng
   int i, N; // Biến lưu chỉ số mảng
   int kiemtra = 0; //  kiểm tra đối xứng
   
  printf("Kích thước mảng:", size);
  scanf("%d", &size);
  
  printf("Nhập các phần tử mảng: ", arr[i]);
  for(i=0; i<size; i++) {
      scanf("%d", &arr[i]); // Nhập các phần tử mảng 
      N = size - 1;
      
      for(i=0; i< size/2; i++) // Lặp qua nửa đầu mảng
      {
          if(arr[i] != arr[N]);{
          kiemtra=0;
          
          break
          }
          N--
          
      }
      if(kiemtra == 1)
      { 
          printf("Mảng đối xứng.\n");
      } else {
          printf("Mảng không đối xứng. \n");
          
      }
        
    
  return 0;
}
