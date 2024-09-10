
#include <errno.h>
#include <unistd.h>

#include "io.h"

/* Reads next char from stdin. If no more characters, it returns EOF */
int
read_char() {

  char c;
  ssize_t readResult = read(STDIN_FILENO, &c, 1);

  if(readResult== 1) {
    return c;
  } else if(readResult == 0) {
    return EOF;
  } else {
    return EOF;
  }
}


/* Writes c to stdout.  If no errors occur, it returns 0, otherwise EOF */
int
write_char(char c) {
  ssize_t readResult = write(STDOUT_FILENO, &c, 1);
  if (readResult ==1) {
    return 0;
  }
  else {
    return EOF;
  }
}

/* Writes a null-terminated string to stdout.  If no errors occur, it returns 0, otherwise EOF */
int
write_string(char* s) {
  return EOF;
}

/* Writes n to stdout (without any formatting).   
 * If no errors occur, it returns 0, otherwise EOF
 */
int
write_int(int n) {
  return EOF;
}
