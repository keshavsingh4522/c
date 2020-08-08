#include <stdio.h>
#include <string.h>
int main()
{
  char c[]="Visual C++";
  char *c1="VisualC++"; // string gets stored as constant at compile time
  // c1[0]='p';
  printf("%d\t%d\n", sizeof(c),sizeof(c1)); // sizeof(c1) --> sizeof Pointer
  printf("%d\t%d\n", sizeof(*c),sizeof(*c1)); // *c=c[0],*c1=c1[0]
  printf("%d\n",strlen(c) ); // strlen not include backslah character(\0)
  return 0;
}
/*
The size of the pointer:-
The size of the pointer basically depends on the architecture of the system in which it is implemented.
For example the size of a pointer in 32 bit is 4 bytes (32 bit ) and 8 bytes(64 bit ) in a 64 bit machines.
The bit types in a machine are nothing but memory address, that it can have.
32 bit machines can have 2^32 address space and 64 bit machines can have upto 2^64 address spaces.
So a pointer (variable which points to a memory location) should be able to point to any of the memory
address (2^32 for 32 bit and 2^64 for 64 bit) that a machines holds.

Because of this reason we see the size of a pointer to be 4 bytes in 32 bit machine and 8 bytes in a 64 bit machine.

*/
