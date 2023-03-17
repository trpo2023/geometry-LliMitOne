#include <stdio.h>

int main(){
  float x, y, r;
  char wkt[100];

  printf("Enter the circle center in format x, y: ");
  if(scanf("%f, %f", &x, &y) != 2)
    {
      printf("Error! Invalid input.\n");
      return 1;
    }
  printf("Enter the circle radius: ");
  if(scanf("%f", &r) != 1)
    {
      printf("Error! Invalid input");
      return 1;
    }
  sprintf(wkt, "CIRCLE(%f %f, %f)", x, y, r);
  printf("The circle in WKT format is %s\n", wkt);
  return 0;
}
