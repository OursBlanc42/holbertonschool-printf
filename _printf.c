#include <unistd.h>

int _printf(const char *format)
{
  unsigned int str_len = 0;
  //unsigned int cursor = 0;
  char *ptr = "z";
while (format[str_len] != '\0')
{
  if ((format[str_len]=='%') && (format[str_len+1]=='c'))
  {
    write(1,ptr,1);
  }
  str_len++;
}



  /** Write function to display text. We use this syntax :
  * int write(int fileDescriptor, void *buffer, size_t bytesToWrite)
  * with file descriptor :
  * 0	stdin
  * 1	stdout
  * 2	stderr
  */

  write(1,format,str_len);
  
  return (0);

}

int main()
{
  _printf("Mon premier%c test");
}