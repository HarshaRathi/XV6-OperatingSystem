#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc,char *argv[]){
    int pid1;
      int i,x=0;
    pid1 = fork();
    if(pid1 < 0){
        printf(2,"Error in fork");
    }
    else if(pid1>0){
        int pid2 = fork();
        if(pid2 < 0){
            printf(2,"Error in fork");
        }
        else if(pid2 > 0){
            int pid3;
            pid3 = fork();
            if(pid3==0){
                printf(2,"Child Created1 %d\n",getpid());
                settickets(getpid(),10);
                sleep(20);
                for(i=0;i<1000000000;i++){
                    x = x * 3.14 * 89.64;
                }
            }
            else{
                int pid4 = fork();
                if(pid4==0){
                    int fd = open("has.txt",O_CREATE|O_WRONLY);
                    for(int i=0;i<100000;i++)
                        write(fd,"harsha",6);
                    close(fd);
                }   
                else{
                    int pid5 = fork();
                    if(pid5==0){
                        sleep(70);
                        getstat();
                    }
                    else{
                        wait();
                    }
                    wait();
                }
                
               
                wait();
            }
            wait();
        }
        else if(pid2==0){
            printf(2,"Child Created2 %d\n",getpid());
            settickets(getpid(),100);
            sleep(20);
            for(i=0;i<1000000000;i++){
              x = x * 3.14 * 89.64;
            }
        }

        wait();
    }
    else if(pid1==0){
        printf(2,"Child Created3 %d\n",getpid());
        settickets(getpid(),100000);
        sleep(20);
        for(i=0;i<1000000000;i++){
              x = x * 3.14 * 89.64;
        }
    }
   
    exit();
}