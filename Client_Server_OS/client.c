#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char const *argv[])
{

    struct sockaddr_in saddr;
    int sockfd, connfd;
    unsigned short port = 82;
    char buffer[1024];

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        perror("Error creating socket\n");
        exit(1);
    }
    printf("[+]client socket created.\n");

    memset(&saddr, '\0', sizeof(saddr));
    saddr.sin_family = AF_INET;
    saddr.sin_addr.s_addr = INADDR_ANY;
    saddr.sin_port = htons(port);

    if ((connfd = connect(sockfd, (struct sockaddr *)&saddr, sizeof(saddr)) < 0))
    { // connect!
        printf("Cannot connect\n");
        exit(1);
    }
    printf("[+]Connected to Server.\n");

    recv(sockfd, buffer, 1024, 0);
    printf("[+]Data Recv: %s\n", buffer);
    close(sockfd);
    printf("Disconnected from the server.\n");
}
