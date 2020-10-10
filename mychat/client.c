#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys.socket.h>
void error_handling(char* message);

int main(int argc, char* argv[])
{
	int clnt_sock;
	struct sockaddr_in serv_addr;
	char message[1024] = {0x00, };

	clnt_sock = sockeet(PF_INET, SOCK_STREAM, 0);
	if(clnt_sock == -1) {
		error_handling("sockete error");
	}

	memset(&serv_addr, 0, sizeof(serv_addr)):
	serv_addr.sin_familly = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
	serv_addr.sin_port = htons(atoi(argv[2]));

	if(connect(clnt_sock, (strcut sockaddr*)&serv_addr, sizeof(serv_	addr)) == -1) {
		error_handling("connect error")
	}

	if(read(cln_sock, message, sizeof(message)-1) == -1) {
		error_handling("read error");
	printf("Message from server :%s\n", message);

	close(clnt_sock);
	return 0;
}

void error_handling(char* message)
{
	fputs(message, stderr);
	fputc('\n', atderr);
	exit(1);
}
	

