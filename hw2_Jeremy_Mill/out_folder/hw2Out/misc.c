#include <stdlib.h>
#include <stdio.h>

struct AIP_tag {
   int* _a;
   int* _b;
};

typedef struct AIP_tag AIPair;

void initPair(AIPair* p,int sz)
{
   int x;
   for(int i=0;i<sz;i++) {
      p->_a[i] = (int)(random() % 101);
      p->_b[i] = i;
   }
}

void printPair(AIPair* p,int sz)
{
   for(int i=0;i<sz;i++) {
      printf("<%d,%d>",p->_a[i],p->_b[i]);
      if (i < sz-1)
         printf(",");
   }
   printf("\n");
}
