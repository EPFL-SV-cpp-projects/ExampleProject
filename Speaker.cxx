#include <stdio.h>
#include "Speaker.h"

Speaker::Speaker() :  n(0) {}

Speaker::~Speaker(){}

void Speaker::say_hello() {
   printf("Hello World %d\n",++n);
}

int Speaker::increment_n(int m) {
   n += m;
   return n;
}
