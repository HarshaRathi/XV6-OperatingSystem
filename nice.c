#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "param.h"
//#include "defs.h"
int main(int argc,char *argv[]){
	int pid;
	int priority;
	if(argc != 3){
	  printf(2,"Usage : nice <pid> <priority>\n");
	  exit();	
	}
	pid = atoi(argv[1]);
	priority = atoi(argv[2]);
	if(!(priority > 0 && priority < 4)){
	  printf(2,"Invalid Priority...It should be between [0-29]");
	  exit();
	}
	setpriority(pid,priority);
	exit();
		
}