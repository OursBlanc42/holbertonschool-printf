#include <unistd.h>

int _printf(const char *format)
{
  /* declare variable */
  unsigned int str_len = 0;
  unsigned int cursor = 0;
  unsigned int previous_cursor = 0;
  char *ptr = "A";
  
  /* Loop through format until end */
  while (format[str_len] != '\0')
  {
    /* if %c is deteced */
    if ((format[str_len]=='%') && (format[str_len+1]=='c'))
    {  /* print from begining to %c */
      write(1,&format[previous_cursor],cursor);
      write(1,ptr,1);
      previous_cursor = cursor +2;
    }
    cursor++;
    str_len++;
  }
  
  /** Write function to display text. We use this syntax :
  * int write(int fileDescriptor, void *buffer, size_t bytesToWrite)
  * with file descriptor :
  * 0    stdin
  * 1    stdout
  * 2    stderr
  */

  /* write from %c to end */
  write(1,&format[previous_cursor],str_len-(previous_cursor));

  return (0);

}

int main(void)
{
  _printf("Mon premier %c test !\n");
  _printf("%c %c");
  return (0);
}