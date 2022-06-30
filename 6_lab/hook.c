#define _GNU_SOURCE

#include <stdio.h>
#include <dlfcn.h>
#include <time.h>

static void* (*real_malloc)(size_t)=NULL;
clock_t b,a;

static void mtrace_init(void)
{
    real_malloc = dlsym(RTLD_NEXT, "malloc");
    if (NULL == real_malloc) {
        fprintf(stderr, "Error in `dlsym`: %s\n", dlerror());
    }
}

void *malloc(size_t size)
{
    if(real_malloc==NULL) {
        mtrace_init();
    }
    b = clock();
    void *p = NULL;
    // fprintf(stderr, "malloc(%d) = ", size);
    a = clock();
    p = real_malloc(size);
    fprintf(stderr, "%ld,%ld\n", size, (a-b));
    return p;
}
