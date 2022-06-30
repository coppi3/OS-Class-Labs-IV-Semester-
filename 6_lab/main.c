#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _8G 8589934592

int main(){
  clock_t mallocB, mallocA, freeB, freeA;
  FILE * logFile = fopen("log.csv", "w");
  fprintf(logFile, "bytes,malloc,free\n");
  for(long long i = 1; i < _8G; i*=2){
    mallocB = clock();
    void* tmp = malloc(i);
    mallocA = clock();
    freeB = clock();
    free(tmp);
    freeA = clock();
    fprintf(logFile, "%lld,%d,%d\n", i, (mallocA - mallocB), (freeA - freeB));
  }
  return 0;
}
