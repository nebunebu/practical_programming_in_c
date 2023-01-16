#include <stdio.h>

#define squared1(x) x*x
#define squared2(x) (x*x)
#define squared3(x) (x)*(x)
#define squared4(x) ((x)*(x))

int main(void)
{
  printf("#define squared1(x) x*x: %f\n", 18.0/squared1(2+1));
  printf("#define squared2(x) (x*x): %f\n", 18.0/squared2(2+1));
  printf("#define squared3(x) (x)*(x): %f\n", 18.0/squared3(2+1));
  printf("#define squared4(x) ((x)*(x)): %f\n", 18.0/squared4(2+1));
  return 0;
}
