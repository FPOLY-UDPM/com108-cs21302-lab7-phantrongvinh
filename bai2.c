/******************************************************************************
 * Họ và tên: Phan Trọng Vinh
 * MSSV:      PS49909
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
//  Input: Nhập vào username và password
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

void main()
{
    char userSys[] = "hinva";
    int passSys = 210198;

    char user[100];
    int pass;

    printf("Nhap username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';

    printf("Nhap password: ");
    scanf("%d", &pass);

    if (strcmp(user, userSys) == 0 && pass == passSys)
    {
        printf("Dang nhap thanh cong");
    }
    else
    {
        printf("dang nhap that bai");
    };
}