#include <stdio.h>
struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};
void nhapThongTin(struct SinhVien *sv) {
    printf("Nhap ho va ten: ");
    scanf(" %[^\n]", sv->hoTen);
    printf("Nhap tuoi: ");
    scanf("%d", &(sv->tuoi));
    printf("Nhap so dien thoai: ");
    scanf("%14s", sv->soDienThoai);
    printf("Nhap email: ");
    scanf("%49s", sv->email);
}
void xuatThongTin(const struct SinhVien *sv) {
    printf("Ho va ten: %s\n", sv->hoTen);
    printf("Tuoi: %d\n", sv->tuoi);
    printf("So dien thoai: %s\n", sv->soDienThoai);
    printf("Email: %s\n", sv->email);
}
int main() {
    struct SinhVien sinhVien1;
    nhapThongTin(&sinhVien1);
    printf("\nThong tin sinh vien:\n");
    xuatThongTin(&sinhVien1);
    return 0;
}

