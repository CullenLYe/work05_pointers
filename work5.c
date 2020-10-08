#include <stdio.h>

int main() {
// 1) Declare and initialize variables of types char, int, and long.
  char c = 'a';
  int i = 777;
  long l = 32134124;

// 2) Print out the addresses of each variable in hex and decimal.
  printf("&c: %p\n", &c);
  printf("&c: %lu\n", &c);

  printf("&i: %p\n", &i);
  printf("&i: %lu\n", &i);

  printf("&l: %p\n", &l);
  printf("&l: %lu\n\n", &l);

// &c > &i > &l
// Also, &c is 7 more than &i, while &i is 4 more than &l

// 3) Declare and initialize pointers for each of your variables.
  char *cp = &c;
  int *ip = &i;
  long *lp = &l;

// 4) Print out the values of each pointer.
  printf("cp: %p\n", cp);
  printf("ip: %p\n", ip);
  printf("lp: %p\n\n", lp);

// 5) Use the pointers to modify the values of the original variables and print out the new values.
  *cp='d';
  *ip=17;
  *lp=234252533;
  printf("c: %d\n", c);
  printf("i: %d\n", i);
  printf("l: %ld\n\n", l);

// 6) Declare and initialize an unsigned int variable and 2 pointers that point to it,
// one should be an int * and the other should be a char *
  unsigned int u = 41412413;
  int *iu = &iu;
  char *cu = &cu;

// 7) Print out the value of each pointer (this should be the memory address),
// and de-reference each pointer to print out the value each points to.
  printf("iu: %p iu points to: %d\n", iu, *iu);
  printf("cu: %p cu points to: %c\n\n", cu, *cu);

// 8) Print out your unsigned int in decimal and hex.
  printf("u (dec): %u\n", u);
  printf("u (hex): %x\n\n", u);

// 9) Use the char * to print out each individual byte of your unsigned int.
  int count;
  printf("Bytes:\n");
  for (count=0; count<4; count++) {
    printf("%hhu\n", *(cu+count));
  }
  printf("\n");

// 10) Use the char * to increment each byte of the unsigned int by 1.
// Print out the unsigned int in both hex and decimal after each modification.
// When done, print out each byte like in step 9. You may need to reset the
// char * so that it points to the unsigned int, depending on how you wrote step 4 out.
  for (count=0; count<4; count++) {
    (*cu)++;
    printf("Byte#%d (dec): %hhu\n", count, *cu);
    printf("Byte#%d (hex): %hhx\n", count, *cu);
    cu++;
  }
  printf("\n");

// 11) Perform the same operation as in step 10, except add 16 to each byte.
  for (count=0; count<4; count++) {
    (*cu)+=16;
    printf("Byte#%d (dec): %hhu\n", count, *cu);
    printf("Byte#%d (hex): %hhx\n", count, *cu);
    cu++;
  }

  return 0;

}
