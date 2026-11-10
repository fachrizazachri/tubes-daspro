#include <stdio.h>
#include <string.h>

int main() {
    char command[100];
    char taskDetail[100];
    char taskDeadline[100];
    printf("%60s\n", "\t To-Do List");
    printf("===================================================================================================================\n");
    printf("To-do list memiliki beberapa fitur yang dapat membantu Anda mengatur tugas. Beberapa fitur yang dapat digunakan:\n");
    printf("===================================================================================================================\n");
    printf("  add\t\t: Menambahkan tugas baru ke dalam daftar.\n");
    printf("  remove\t: Menghapus tugas dari daftar.\n");
    printf("  list\t\t: Menampilkan semua tugas yang ada dalam daftar.\n");
    printf("  complete\t: Menandai tugas sebagai selesai.\n");
    printf("  incomplete\t: Menandai tugas sebagai belum selesai.\n");
    printf("  exit\t\t: Keluar dari aplikasi.\n");
    printf("===================================================================================================================\n");
    printf("%60s\n", "Selamat menggunakan!");
    printf("===================================================================================================================\n");
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
            printf("Masukkan detail tugas : ");
            fgets(taskDetail, sizeof(taskDetail), stdin);
            printf("Masukkan deadline tugas : ");
            fgets(taskDeadline, sizeof(taskDeadline), stdin);
            taskDetail[strcspn(taskDetail, "\n")] = '\0';
            taskDeadline[strcspn(taskDeadline, "\n")] = '\0';
            printf("Tugas ditambahkan: %s (Deadline: %s)\n", taskDetail, taskDeadline);
        }
        else if (strcmp(command, "remove") == 0) {
            printf("Prototipe: Menghapus tugas...\n");
            printf("Tugas yang ingin dihapus : ");
            fgets(taskDetail, sizeof(taskDetail), stdin);
            taskDetail[strcspn(taskDetail, "\n")] = '\0';
            printf("Tugas dihapus: %s\n", taskDetail);
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