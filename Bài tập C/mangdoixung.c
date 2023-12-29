#include <stdio.h>
#define MAX_SIZE 100 // Gi?i h?n k�ch thu?c m?ng

int main()
{
    int arr[MAX_SIZE]; // Khai b�o m?ng
    int size; // Khai b�o bi?n luu k�ch thu?c m?ng
    int i, j; // Khai b�o bi?n luu ch? s? m?ng
    int isSymmetric = 1; // Khai b�o bi?n c? ki?m tra d?i x?ng

    // Nh?p k�ch thu?c m?ng t? b�n ph�m
    printf("Nh?p k�ch thu?c m?ng: ");
    scanf("%d", &size);

    // Nh?p c�c ph?n t? m?ng t? b�n ph�m
    printf("Nh?p c�c ph?n t? m?ng: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ki?m tra m?ng d?i x?ng
    // G�n j b?ng ch? s? ph?n t? cu?i c�ng c?a m?ng
    j = size - 1;

    // L?p qua n?a d?u m?ng
    for(i=0; i<size/2; i++)
    {
        // N?u ph?n t? ? v? tr� i kh�c ph?n t? ? v? tr� j
        if(arr[i] != arr[j])
        {
            // G�n c? b?ng 0 v� d?ng v�ng l?p
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
        printf("M?ng kh�ng d?i x?ng.\n");
    }

    return 0;
}
