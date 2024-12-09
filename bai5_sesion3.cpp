#include <stdio.h>
#include <string.h>

// cau truc luu tru thong tin cua sinh vien 
struct SinhVien {
    int stt;
    char hoTen[50];
    int tuoi;
    char sdt[15];
    char email[50];
};

int main() {
    // khoi tao danh sach sinh vien 
    struct SinhVien danhSachSinhVien[] = {
        {1, "Nguyen Van A", 20, "0904488481", "anv@rikkeiacademy.com"},
        {2, "Nguyen van B", 21, "0904488482", "anv@rikkeiacademy.com"},
        {3, "nguyen Van C", 22, "0904488483", "anv@rikkeiacademy.com"},
        {4, "nguyen Van D", 23, "0904488484", "anv@rikkeiacademy.com"},
        {5, "Nguyen Van E", 24, "0904488485", "anv@rikkeiacademy.com"},
        {6, "Nguyen Van F", 25, "0904488486", "anv@rikkeiacademy.com"},
        {7, "Nguyen Van G", 26, "0904488487", "anv@rikkeiacademy.com"},
        {8, "Nguyen Van H", 27, "0904488488", "anv@rikkeiacademy.com"},
        {9, "Nguyen Van I", 28, "0904488489", "anv@rikkeiacademy.com"},
        {10, "Nguyen Van K", 29, "0904488490", "anv@rikkeiacademy.com"},
    };

    int soLuongSinhVien = sizeof(danhSachSinhVien) / sizeof(danhSachSinhVien[0]);

    // in tieu de bang 
    printf("%-5s %-25s %-5s %-15s %-30s\n", "STT", "Ho va ten", "Tuoi", "So dien thoai", "email");

    // in thong tinh tung sinh vien 
    for (int i = 0; i < soLuongSinhVien; i++) {
        printf("%-5d %-25s %-5d %-15s %-30s\n",
               danhSachSinhVien[i].stt,
               danhSachSinhVien[i].hoTen,
               danhSachSinhVien[i].tuoi,
               danhSachSinhVien[i].sdt,
               danhSachSinhVien[i].email);
    }

    return 0;
}
