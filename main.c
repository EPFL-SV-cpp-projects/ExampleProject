#include <stdio.h>

int n; 
void say_hello();
int main(int argc, char **argv) {
   say_hello();
   say_hello();
   say_hello();
   return 0;
}
void say_hello() {
   printf("Hello World %d\n",++n);
}

