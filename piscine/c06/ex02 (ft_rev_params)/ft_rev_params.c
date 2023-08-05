#include <unistd.h>

int main(int argc, char **argv)
{
        if ((int) argc == 1)
                return 0;
        while((int) --argc > 0)
        {
                while(*argv[(int) argc])
                {
                        write(1, &*argv[(int) argc]++, 1);
                }
                write(1, "\n", 2);
        }
}

