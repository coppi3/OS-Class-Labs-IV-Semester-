#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <fcntl.h> 
#include <errno.h> 
#include <time.h>
#include <sys/mman.h>

#define PAGESIZE 4096

extern int errno; 
const char* LOGPATH = "logging.txt";
const char* MEMINFO = "/proc/meminfo";

struct tm* gettime(){
  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  return timeinfo;
  //printf ( "Current local time and date: %s", asctime (timeinfo) );

}

void logging(unsigned mem, FILE* fd){

	if(!fd) {
		printf("fopen Failed!\n");
		exit(-1);
	}
	struct tm * time = gettime();
	fprintf(fd, "%s %u\n", asctime(time), mem);
}

int main(){
	printf("[mmap() Edition] Good Luck Have fun! You're being membombed...\n");
	FILE* fd = fopen(LOGPATH, "a+");
	char *container;
	unsigned totalmem = 0;
	printf("Input the correct pwd to get bombed.\n");
	char correctPwd[7] = "qwerty";
	char buf[7];
	scanf("%s", &buf);
	
	struct tm * time = gettime();
	if(strcmp(buf, correctPwd)){
		printf("Incorrect!\n");
		goto HERE;
	}
	printf("Get ready...\n");
	while(1){
		container = (char*)mmap(0, PAGESIZE, PROT_WRITE | PROT_READ, MAP_PRIVATE | MAP_ANONYMOUS, 0, 0);
		memset(container, 0, PAGESIZE);
		if(container == MAP_FAILED) {
			printf("Malloc Failed\n");
			exit(-1);
		}

		totalmem += PAGESIZE;
		logging(totalmem, fd);
		//sleep(1);
	}
	HERE:
	return 0;
}

