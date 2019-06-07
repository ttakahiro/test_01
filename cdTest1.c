#include <stdio.h>
#include <string.h>

int sub(char *param)
{
char buffer[8];

    strncpy(buffer, param, strlen(param));

    printf(buffer);
}

int main(int argc, char *argv[])
{

    sub("Overflow message\n");

    return 0;

}
