#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc,char *argv[]){
    int x = 0;
    int i =0;
    int pid = fork();
    if(pid==0){
    int fd = open("has",O_CREATE|O_WRONLY);
    for(i=0;i<1000;i=i+1){
       write(fd,"hello",6);
       x = 3.14 * 89.94 + x * 45.89 * i;
   
    }
    close(fd);
    }
    else{
        int pid1 = fork();
        if(pid1==0){
            for (double z = 0; z < 1000000.0; z += 0.01)
            {
            double x = x + 3.14 * 89.64; 
            }
     
        }
        else{
            
            wait();
        }
       
        wait();
        
    }
    
    exit();
}