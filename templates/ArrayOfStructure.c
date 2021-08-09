#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Process
    {
        char *PID;
        int AT, BT, CT, TAT, WT, RT;
    };
    struct Process *processes;
    int SIZE;
    processes = (struct Process *)malloc(SIZE * sizeof(struct Process));
}