#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	printf("[VirtualAlloc() Edition] Good Luck Have fun! You're being membombed...\n");
	printf("Input the correct pwd to get bombed.\n");
	char correctPwd[7] = "qwerty";
	char buf[7];
	scanf("%s", &buf);
	
	if(strcmp(buf, correctPwd)){
		printf("Incorrect!\n");
		return 0;
	}
	printf("Get ready...\n");
	SYSTEM_INFO info;
	GetSystemInfo(&info);
	size_t PageSize = info.dwPageSize;
	while (1) {
		LPVOID  container = VirtualAlloc(0, PageSize, MEM_COMMIT, PAGE_READWRITE);
	}
	return 0;
}