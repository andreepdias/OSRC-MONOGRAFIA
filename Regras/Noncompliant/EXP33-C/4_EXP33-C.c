#include <stdio.h>
enum
{
    BUFFERSIZE = 24
};
void report_error(const char *msg)
{
    const char *error_log = msg;
    char buffer[BUFFERSIZE];
    sprintf(buffer, "Error: %s", error_log);
    printf("%s\n", buffer);
}
int main(void)
{
    if (do_auth() == -1)
    {
        report_error("Unable to login");
    }
    return 0;
}