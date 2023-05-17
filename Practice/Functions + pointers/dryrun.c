#include <stdio.h>

/*void parameterMystery(int* a, int* b, int* c){
  printf("%d %d %d \n", *a, *b, *c );
  *a = *a + *c;
  ++*c;
  --*b;
  printf("%d %d %d \n", *a, *b, *c );
}

int main(){
  int w = 0;
  int x = 1;
  int y = 3;
  int z = 7;
  parameterMystery(&w,&w,&z);
  printf("%d %d %d %d\n", w, x, y, z );
}*/

void v1v2p1p2(){
  int v1 = 10;
  int v2 = 25;
  int* p1 = &v1;
  int* p2 = &v2;

  *p1 = *p1 + *p2; // 10 + 25 = v1
  p2 = p1; // p2 takes address of p1, p1 adress at v1
  *p2 = *p1 + *p2; //  v1 + v1 = 35 + 35 = p2 = p1 = v1

  printf("%d %d\n", v1, v2);
  printf("%d %d\n", *p1, *p2);
}

int main(){
  v1v2p1p2();
  return 0;
}

