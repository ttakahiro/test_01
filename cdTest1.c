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
int pos = 0;
int i;
int len,*ptr;

    sub("Overflow message\n");
    strcpy(message, "tes");
    len = 10;
    sub2(message);
    
    for(i=0;i<argc;i++)
    {
		pos += snprintf(message+pos,sizeof(message)-pos, "%s",  argv[i]);
    }
    ptr = &len;
    for(*ptr=0;*ptr<10;*ptr--)
    {
		printf("Hello\n");
    }
    
    return 0;

}
