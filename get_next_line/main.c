#include "get_next_line.h"
#include <fcntl.h>
# include <stdio.h> 


int main(void)
{
    char *result;
    int fd = open("test.txt", O_RDONLY);

    if (fd == -1)
    {
        printf("Erreur lors de l ouverture du fichier");
        return (1);
    }
    result = get_next_line(fd);
    while (result)
    {
        printf(" Result : %s", result);
        free(result);
        result = get_next_line(fd);
    }
    return (0);
}