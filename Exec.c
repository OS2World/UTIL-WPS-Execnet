/* Rolf Breuning 25.4.95
   Collect command line arguments and execute them in a command line.
   This allows to simulate OS/2 program objects on network drives which
   support extended attributes.
   */

#include <stdlib.h>

int main(int argc, char * argv[]) {
  int i;
  char cmd[200], *p = cmd, *arg;
  for (i = 1; i < argc; i++) {
    arg = argv[i];
    if(*arg == '#' && *(arg+1) == '0') arg = argv[0];
    while (*p++ = *arg++);
    *(p-1) = ' ';
    };
  system(cmd);
}
