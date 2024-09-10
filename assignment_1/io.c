
#include <errno.h>
#include <unistd.h>
#include "io.h"



/* Reads next char from stdin. If no more characters, it returns EOF */
int read_char() {

  char c;
  ssize_t readResult = read(STDIN_FILENO, &c, 1);

  if(readResult== 1) {
    return c;
  } else if(readResult == 0) {
    return EOF;
  }
    return EOF;
  }


/* Writes c to stdout.  If no errors occur, it returns 0, otherwise EOF */
int write_char(char c) {
  ssize_t readResult = write(STDOUT_FILENO, &c, 1);
  if (readResult ==1) {
    return 0;
  }
  return EOF;
}

/* Writes a null-terminated string to stdout.  If no errors occur, it returns 0, otherwise EOF */
int write_string(char* s) {
  ssize_t length = 0;

  while (s[length] != '\0') {
    length++;
  }

  ssize_t readResult = write(STDOUT_FILENO, s, length);
  if(readResult == length) {
    return 0;
  }
  return EOF;
}

/* Writes n to stdout (without any formatting).   
 * If no errors occur, it returns 0, otherwise EOF
 */
int write_int(int n) {
  return EOF;
}
