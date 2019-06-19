#include <stdio.h>
#include <string.h>

int sub(char *param)
{
char buffer[8];

    strncpy(buffer, param, strlen(param));

    printf(buffer);
    
    return 0;
}
void sub2(char msg[22])
{
	printf(msg);
}

int main(int argc, char *argv[])
{
char message[20];


    sub("Overflow message\n");
    strcpy(message, "tes");
    sub2(message);
    
    return 0;

}
