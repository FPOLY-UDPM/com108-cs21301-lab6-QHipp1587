/******************************************************************************
 * Họ và tên: [Nguyễn Quốc Hiệp]
 * MSSV:      [PS48461]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main()
{
    int n;
    int a[100];

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int tong = 0;
    int dem = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            tong += a[i];
            dem++;
        }
    }
    if (dem > 0)
    {
        float trungBinh = (float)tong / dem;
        printf("Trung binh cong cac so chia het cho 3 la: %.2f", trungBinh);
    }
    else
    {
        printf("Khong co so nao chia het cho 3 trong mang");
    }

    return 0;
}
