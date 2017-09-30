#include <stdio.h>
#include <mem.h>

int n;
void addStudents() {
    char name[50];
    char date[50];
    char phone[50];
    printf("Nhap ten sinh vien:");
    fgets(name, sizeof(name),stdin);
    printf("\nNhap ngay sinh: ");
    fgets(date, sizeof(date),stdin);
    printf("\nNhap so dien thoai: ");
    fgets(phone, sizeof(phone),stdin);
    FILE *wf = fopen ("data.txt","w");
    fputs(name,wf); fprintf(wf, "\n");
    fputs(date,wf); fprintf(wf, "\n");
    fputs(phone,wf); fprintf(wf, "\n");
    fclose(wf);
}
void disPlay() {
    FILE *inFile = fopen("data.txt", "r");
    char outPut[1000];
    while (fgets(outPut, 1000, inFile)) {
        printf("%s", outPut);
    }
}
void main() {
        printf("--============================--\n");
        printf("           MENU \n");
        printf("1:Hien thi danh sach sinh vien.\n");
        printf("2:Them moi sinh vien.\n");
        printf("3:Sua sinh vien.\n");
        printf("4:Xoa sinh viet.\n");
        printf("5:Thoat\n");
        printf("--============================--\n");
        printf(" Nhap lua chon cua ban: \n");
        scanf("%d", &n);
        switch (n) {
            case 1:
                disPlay();
                break;
            case 2:
                addStudents();
                break;
            case 5:
                printf("Tam biet!!");
                break;
            default:
                printf("Nhap yeu cau sai! Vui long nhap lai!");
        }
}



