#include <stdio.h>
#include <time.h>

int degrees ;
int hours =4;

int main(void) {

  degrees = hours * hours;

  FILE *file = fopen("degrees", "a+");

  for (int hours =0; hours <= 24; hours += 2){ // hours =+2 same as hours = hours + 2
    fprintf(file, "%d:%d\n ",hours, degrees);
  }

// hours * hours == degrees

  return 0;
}