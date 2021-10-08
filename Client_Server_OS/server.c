#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc, char const *argv[])
{

    struct sockaddr_in saddr, caddr;
    int sockfd, clen, isock;
    unsigned short port = 82;
    char buffer[1024];

    if (sockfd = socket(AF_INET, SOCK_STREAM, 0) < 0)
    {
        perror("Error creating socket\n");
        exit(1);
    }
    printf("[+]server socket created.\n");

    memset(&saddr, '\0', sizeof(saddr));
    saddr.sin_family = AF_INET;
    saddr.sin_addr.s_addr = INADDR_ANY;
    saddr.sin_port = htons(port);

    if (bind(sockfd, (struct sockaddr *)&saddr, sizeof(saddr)) < 0)
    {
        printf("Error binding\n");
        exit(1);
    }
    printf("[+]Bind to the port number: %u\n", port);

    listen(sockfd, 5);
    printf("Listening...\n");

    clen = sizeof(caddr);
    if (isock = accept(sockfd, (struct sockaddr *)&caddr, &clen) < 0)
    { // accept one
        printf("Error accepting\n");
    }

    strcpy(buffer, "Hello from the server");
    send(isock, buffer, strlen(buffer), 0);

    close(sockfd);
    printf("[+]Closing the connection.\n");

    return 0;
}