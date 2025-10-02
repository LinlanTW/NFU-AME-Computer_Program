#include <stdio.h>
int main()
{
int aa,bb,cc;
aa=10;
bb=100;
printf("aa=%d,,bb=%d\n",aa,bb);
cc=aa; //unk=10 C值變為A
aa=bb; //aa=100 A變為B
bb=cc; //bb=10  B變為C                                                                                                              
printf("aa=%d,,bb=%d\n",aa,bb);
}