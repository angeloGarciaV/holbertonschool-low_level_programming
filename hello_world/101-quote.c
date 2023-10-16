#include <unistd.h> 
#include <sys/syscall.h>

/**
 * main - prints a message using syscall
 *
 * Return: -1 (errno)
 */

int main(void) 
{ 
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
    syscall(SYS_write, 1, msg, sizeof(msg)); 
    return (-1);
}
