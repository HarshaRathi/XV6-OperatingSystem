#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc,char *argv[]){
	if (argc != 3){
		printf(2,"Usage : sett <pid> <no_of_tickets>");
		exit();
	}
	int pid;
	int tickets;
	pid = atoi(argv[1]);
	tickets = atoi(argv[2]);
	settickets(pid,tickets);
	exit();
}
