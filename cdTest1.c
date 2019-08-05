#include <stdio.h>
#include <string.h>

int sub(char *param)
{
char buffer[8];

    strncpy(buffer, param, strlen(param));

    printf(buffer);
    
    return 0;
}
void sub2(char msg[22], int *len)
{
	*len = printf(msg);
	
	
}

int main(int argc, char *argv[])
{
char message[20];
int pos = 0;
int i;
int len;

    sub("Overflow message\n");
    strcpy(message, "tes");
    len = 10;
    sub2(message,&len);
    
    for(i=0;i<argc;i++)
    {
		pos += snprintf(message+pos,sizeof(message)-pos, "%s",  argv[i]);
    }

    for(i=0;i<10;i--)
    {
		printf("Hello\n");
    }
    
    return 0;

}
