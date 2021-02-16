#include <cstdio>

struct College {
  char name[256];
};

void print_names(College* colleges, size_t n_colleges){
  for(size_t i = 0; i < n_colleges; i++){
    printf("\n\n%s College\n", colleges[i].name);
  }
}
int main(){
  int a=4,b=7;
  int *ptr_a, *ptr_b;
  ptr_a = &a;
  ptr_b = &b;
  College oxford[] = {"Magdalan","Nuffield","Kellogg"};
  print_names(oxford, sizeof(oxford)/sizeof(College));
  printf("\n\nsize of oxford:%zd\n\nsize of College:%zd\n\n", sizeof(oxford),sizeof(College));
  printf("\n\nA is:%d and b is:%d\nAddress of A is:%p and B is:%p\n\n",a,b,&a,&b);
  printf("pointed too value of ptr_a is:%d",*ptr_a);
}
