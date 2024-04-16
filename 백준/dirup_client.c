#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>

#define MAX_FILES 100

typedef struct {
    char *file_path;
    int file_size;
} FileInfo;

void *upload_file(void *arg) {
    FileInfo *file_info = (FileInfo *)arg;

    // Simulate file upload
    printf("[%s] Upload completed! ... %d bytes\n", file_info->file_path, file_info->file_size);

    free(file_info->file_path);
    free(file_info);

    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <server_ip> <server_port> <directory_path>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    char *server_ip = argv[1];
    int server_port = atoi(argv[2]);
    char *directory_path = argv[3];

    // Simulate reading files in the directory
    char *files[MAX_FILES] = {"hw/aaa.c", "hw/include/111.h", "hw/include/222.h", "hw/bbb", "hw/ccc", "hw/lib/ddd.a"};
    int num_files = 6;

    // Create threads for concurrent file uploads
    pthread_t threads[MAX_FILES];
    int i;

    for (i = 0; i < num_files; i++) {
        FileInfo *file_info = (FileInfo *)malloc(sizeof(FileInfo));
        file_info->file_path = strdup(files[i]);
        file_info->file_size = rand() % 5000 + 1000;  // Simulate file size

        pthread_create(&threads[i], NULL, upload_file, (void *)file_info);
    }

    // Wait for all threads to finish
    for (i = 0; i < num_files; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("%d/%d files has been uploaded!\n", num_files, num_files);

    return 0;
}
