/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI
//  Input: Nhập 5 chuỗi bất kỳ
//  Output: Thứ tự các chuỗi đã được sắp xếp

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

void sortString(char x[])
{
    char str[100];
    strcpy(str, x);

    if (strlen(str) == 0)
    {
        printf("Chuoi rong\n");
    }
    else
    {
        for (int i = 0; i < strlen(str) - 1; i++)
        {
            for (int j = 1; j < strlen(str); j++)
            {
                if (str[i] > str[j])
                {
                    char temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }
    strcpy(x, str);
    strrev(x);
}

void main()
{
    int i = 0;
    char str[100];
    do
    {
        printf("Nhap vao chuoi: ");
        fgets(str, sizeof(str), stdin);
        sortString(str);
        printf("Chuoi %d: %s\n", i + 1, str);
        i++;
    } while (i < 5);
}