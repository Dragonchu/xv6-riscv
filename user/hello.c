#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
  printf("hello, world, %d\n", version());
  exit(0);
}
