/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI
//  Input: nhập vào 1 chuỗi
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];

    printf("Nhap vao 1 chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    int n = 0, p = 0;
    int isNum = 0;
    // printf("%d", strlen(str));

    while (i < strlen(str))
    {

        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            isNum++;
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'y' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'U')
        {
            n++;
        };
        i++;
    }
    p = strlen(str) - n - isNum;
    printf("Chuoi %s co %d nguyen am va %d phu am\n", str, n, p);
    char rev[100];
    strncpy(rev, str, sizeof(str) - 1);
    rev[strcspn(rev, "\n")] = '\0';
    printf("Chuoi %s co dao nguoc la: %s\n", str, strrev(rev));
}
