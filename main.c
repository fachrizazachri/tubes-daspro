#include <stdio.h>
#include <string.h>

int main() {
    char command[100];
    printf("To-Do List\n");
    printf("To-do list ini memiliki beberapa fitur yang dapat membantu Anda mengatur tugas-tugas Anda dengan lebih baik. Berikut adalah beberapa fitur yang dapat Anda gunakan:\n");
    printf("  add \t\t : Menambahkan tugas baru ke dalam daftar.\n");
    printf("  remove \t : Menghapus tugas dari daftar.\n");
    printf("  list \t : Menampilkan semua tugas yang ada dalam daftar.\n");
    printf("  complete \t : Menandai tugas sebagai selesai.\n");
    printf("  incomplete \t : Menandai tugas sebagai belum selesai.\n");
    printf("  exit \t : Keluar dari aplikasi.\n");
    printf("Selamat menggunakan!\n\n");
    while(1){
        printf("[to-do] ");
        if (fgets(command, sizeof(command), stdin) == NULL) {
            break;
        }
        command[strcspn(command, "\n")] = '\0';
        if(strcmp(command, "exit") == 0){
            break;
        }

        if (strcmp(command, "add") == 0) {
            printf("Prototipe: Menambahkan tugas baru...\n");
        }
        else if (strcmp(command, "remove") == 0) {
            printf("Prototipe: Menghapus tugas...\n");
        }
        else if (strcmp(command, "list") == 0) {
            printf("Prototipe: Menampilkan semua tugas...\n");
        }
        else if (strcmp(command, "complete") == 0) {
            printf("Prototipe: Menandai tugas sebagai selesai...\n");
        }
        else if (strcmp(command, "incomplete") == 0) {
            printf("Prototipe: Menandai tugas sebagai belum selesai...\n");
        }
        else {
            printf("Perintah tidak dikenal.\n");
        }
    }
    printf("Bye!\n");
    return 0;
}