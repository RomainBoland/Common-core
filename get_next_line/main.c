#include "get_next_line.h"
#include <stdio.h> 

int main(void)
{
    char *result;
    int fd = open("text.txt", O_RDONLY);

    result = get_next_line(fd);
    
    while (result)
    {
        result = get_next_line(fd);
        printf("%s\n", result);
    }
    return (0);
}