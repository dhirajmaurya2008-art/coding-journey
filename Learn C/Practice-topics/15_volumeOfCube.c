#include <stdio.h>

int main()
{
    int height = 10, width = 12, depth = 8;
    int volume;

    volume = (height*width*depth);

    printf("Volume of cube with height %d, width %d, and depth %d is: %d.", height, width, depth, volume);

    return 0;
}