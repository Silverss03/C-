#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Cấu trúc của bộ khởi đầu FAT16
struct BootSector {
    uint8_t jmpInstruction[3];
    char oemName[8];
    uint16_t bytesPerSector;
    uint8_t sectorsPerCluster;
    // Thêm các trường khác tại đây
};

// Cấu trúc của một mục trong thư mục gốc (root directory)
struct DirectoryEntry {
    char filename[8];
    char extension[3];
    uint8_t attributes;
    // Thêm các trường khác tại đây
};

int main() {
    // Khai báo bộ khởi đầu và thư mục gốc
    struct BootSector bootSector;
    struct DirectoryEntry rootDirectory[512]; // Giả định kích thước 512 mục trong thư mục gốc

    // Đọc dữ liệu từ bộ khởi đầu và thư mục gốc từ thiết bị hoặc tệp FAT16

    // Hiển thị thông tin từ bộ khởi đầu
    printf("OEM Name: %s\n", bootSector.oemName);
    printf("Bytes per Sector: %d\n", bootSector.bytesPerSector);
    printf("Sectors per Cluster: %d\n", bootSector.sectorsPerCluster);

    // Hiển thị thông tin từ thư mục gốc
    for (int i = 0; i < 512; i++) {
        if (rootDirectory[i].filename[0] == 0x00) {
            break; // Kết thúc danh sách thư mục gốc
        }
        printf("File Name: %s.%s\n", rootDirectory[i].filename, rootDirectory[i].extension);
        printf("Attributes: 0x%02X\n", rootDirectory[i].attributes);
    }

    return 0;
}