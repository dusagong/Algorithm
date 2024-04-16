#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_FILES 100

void handle_client(int client_socket) {
    // Simulate handling incoming connections and receiving files from the client
    char *files[MAX_FILES] = {"hw/aaa.c", "hw/include/111.h", "hw/include/222.h", "hw/bbb", "hw/ccc", "hw/lib/ddd.a"};
    int num_files = 6;
    char client_ip[20];

    // Simulate client IP address
    strcpy(client_ip, "203.252.112.25");

    for (int i = 0; i < num_files; i++) {
        char buffer[256];
        // Simulate receiving file
        sprintf(buffer, "[%s] Received from %s ... %d bytes\n", files[i], client_ip, rand() % 5000 + 1000);
        printf("%s", buffer);
        write(client_socket, buffer, strlen(buffer));
    }

    // Simulate completion message
    printf("The client (%s) has completed the upload of %d/%d files!\n", client_ip, num_files, num_files);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <port>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int server_port = atoi(argv[1]);

    // Simulate setting up server socket
    printf("Server is listening on port %d\n", server_port);

    // Simulate accepting incoming connections
    int client_socket; // Assume this is the accepted socket for the client

    handle_client(client_socket);

    return 0;
}
