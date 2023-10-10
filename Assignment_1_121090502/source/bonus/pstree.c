#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        if (strcmp(argv[1], "-V") == 0)
        {
            printf("pstree (PSmisc) 22.21\n");
            printf("Copyright (C) 1993-2009 Werner Almesberger and Craig Small\n");
            printf("PSmisc comes with ABSOLUTELY NO WARRANTY.\n");
            printf("This is free software, and you are welcome to redistribute it under\n");
            printf("the terms of the GNU General Public License.\n");
            printf("For more information about these matters, see the files named COPYING.\n");
        }
        else
        {
            printf("Command not recognized.\n");
        }
    }
   

    return 0;
}
