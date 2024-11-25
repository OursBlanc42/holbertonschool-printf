#include <unistd.h>

int _printf(const char *format)
{
  unsigned int nb_bytes = 3;
  
  /** calculate here the length **/

  /** Write function to display text. We use this syntax :
  * int write(int fileDescriptor, void *buffer, size_t bytesToWrite)
  * with file descriptor :
  * 0	stdin
  * 1	stdout
  * 2	stderr
  */

  write(1,format,nb_bytes);
  
  return (0);

}

int main()
{
  _printf("Mon premier test");
}