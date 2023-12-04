#include <stdio.h>
struct DiemThi {
    int maSV;
    float diemToan;
    float diemVan;
};
int main() {
	int n;
	printf("nhap so luong sinh vien:\n");
	scanf("%d",&n);
    struct DiemThi dsDiemThi[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap ma sinh vien: ");
        scanf("%d", &dsDiemThi[i].maSV);
        printf("Nhap diem toan: ");
        scanf("%f", &dsDiemThi[i].diemToan);
        printf("Nhap diem van: ");
        scanf("%f", &dsDiemThi[i].diemVan);
    }
    printf("\nDanh sach diem thi:\n");
    for (int i = 0; i < n; i++) {
        printf("Ma sinh vien: %d, Diem toan: %.2f, Diem van: %.2f\n",
               dsDiemThi[i].maSV, dsDiemThi[i].diemToan, dsDiemThi[i].diemVan);
    }
    return 0;
}
