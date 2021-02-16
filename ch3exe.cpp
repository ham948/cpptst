#include <cstdio>
void read(char* a){
  printf("%c",*a);
}

void write(char* a,char b){
  *a=b;
}

int main(){
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upper_ptr = upper;

  lower[3] = 'd';
  upper_ptr[3] = 'D';
  write(lower,'j');
  read(lower);
  char letter_d = lower[3];
  char letter_D = upper_ptr[3];

  printf("\n\nlower: %s\nupper: %s\n", lower, upper);
  lower[7] = 'g';
}
