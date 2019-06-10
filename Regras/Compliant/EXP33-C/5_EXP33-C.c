#include <stdio.h>
enum
{
    BUFFERSIZE = 24
};
void report_error(const char *msg)
{
    char buffer[BUFFERSIZE];
    if (0 < snprintf(buffer, BUFFERSIZE, "Error: %s", msg))
        printf("%s\n", buffer);
    else
        puts("Unknown error");
}
int main(void)
{
    if (do_auth() == -1)
    {
        report_error("Unable to login");
    }
    return 0;
}