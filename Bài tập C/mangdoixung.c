#include <stdio.h>
#define MAX_SIZE 100 // Gi?i h?n kích thu?c m?ng

int main()
{
    int arr[MAX_SIZE]; // Khai báo m?ng
    int size; // Khai báo bi?n luu kích thu?c m?ng
    int i, j; // Khai báo bi?n luu ch? s? m?ng
    int isSymmetric = 1; // Khai báo bi?n c? ki?m tra d?i x?ng

    // Nh?p kích thu?c m?ng t? bàn phím
    printf("Nh?p kích thu?c m?ng: ");
    scanf("%d", &size);

    // Nh?p các ph?n t? m?ng t? bàn phím
    printf("Nh?p các ph?n t? m?ng: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ki?m tra m?ng d?i x?ng
    // Gán j b?ng ch? s? ph?n t? cu?i cùng c?a m?ng
    j = size - 1;

    // L?p qua n?a d?u m?ng
    for(i=0; i<size/2; i++)
    {
        // N?u ph?n t? ? v? trí i khác ph?n t? ? v? trí j
        if(arr[i] != arr[j])
        {
            // Gán c? b?ng 0 và d?ng vòng l?p
            isSymmetric = 0;
            break;
        }

        // Gi?m j di 1 don v?
        j--;
    }

    // In k?t qu?
    if(isSymmetric == 1)
    {
        printf("M?ng d?i x?ng.\n");
    }
    else
    {
        printf("M?ng không d?i x?ng.\n");
    }

    return 0;
}
