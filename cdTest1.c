#include <stdio.h>


int sub(char *param)
{
char buffer[8];

    strcpy(buffer, param);

    printf(buffer);
}

int main(int argc, char *argv[])
{

    sub("Overflow message\n");

    return 0;

}
