#include "main.h"
/**
 * main - runs the shell program
 *
 * Return: 0 on success
 */
int main(void)
{
    char *fullpathbuffer = NULL, *copy = NULL, *buffer = NULL;
    char *PATH = NULL;
    char **av;
    int exitstatus = 0;

    signal(SIGINT, SIG_IGN);
    PATH = _getenv("PATH");
    if (PATH == NULL)
        return (-1);
    while (1)
    {
        av = NULL;
        prm();
        buffer = rd();
        if (*buffer != '\0')
        {
            av = tokenize(buffer);
            if (av == NULL)
            {
                free(buffer);
                continue;
            }
            fullpathbuffer = flp(av, PATH, copy);
            if (cblt(av, buffer, exitstatus) == 1)
                continue;
            exitstatus = frk(av, buffer, fullpathbuffer);
        }
        else
            free(buffer);
    }
    return (0);
}