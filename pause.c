#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
int main(){
    int i;
    i=0;
    
    printf(" pause before\n");
    pause(); // _exit()    exit()
    printf(" pause after\n");
    while(i<20){
        i++;
        sleep(1);
        printf("process things, i=%d\n",i);
    }
    return 0;
}
