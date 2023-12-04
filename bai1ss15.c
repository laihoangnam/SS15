#include <stdio.h>
struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};
int main() {
    int n;
    printf("Nhap so luong sinh vien:\n");
    scanf("%d", &n);
    getchar();
    struct SinhVien danhSachSV[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);

        printf("Nhap ho va ten: ");
        scanf(" %[^\n]", danhSachSV[i].hoTen);
        printf("Nhap tuoi: ");
        scanf("%d", &danhSachSV[i].tuoi);
        printf("Nhap so dien thoai: ");
        scanf("%14s", danhSachSV[i].soDienThoai);
        printf("Nhap email: ");
        scanf("%49s", danhSachSV[i].email);
    }
    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Thong tin sinh vien %d:\n", i + 1);
        printf("Ho va ten: %s\n", danhSachSV[i].hoTen);
        printf("Tuoi: %d\n", danhSachSV[i].tuoi);
        printf("So dien thoai: %s\n", danhSachSV[i].soDienThoai);
        printf("Email: %s\n", danhSachSV[i].email);
        printf("\n");
    }
    return 0;
}

