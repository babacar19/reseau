#include <assert.h>  /* pour insertion messages d'erreur */
#include <stdio.h>   /* pour entree-sorties */
#include <string.h>  /* pour chaine de char */
#include <netdb.h>	// socket, connect, hostent
#include <arpa/inet.h>  // sockaddr_in
#include<netdb.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
typedef struct paquet
{
    char message[30];
    char dAdress;
}

int main()
{
    printf(" %d \n",AF_INET);
    return 0;
}