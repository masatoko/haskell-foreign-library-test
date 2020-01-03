#include "HsFFI.h"
#include "mylib.h"
#include "Lib_stub.h"

void hs_init_wrapper(void) {
  int argc = 2;
  char *argv[] = {(char *)"+RTS", (char *)"-A32m", NULL};
  char **pargv = argv;
  hs_init(&argc, &pargv);
}