#include <unistd.h>

int main()
{
    int x = 65;
    write(1, &x, 1);
}