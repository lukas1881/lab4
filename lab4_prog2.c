#include<stdio.h>

int main(){
  int i;
  printf("Podaj liczbę, z której obliczona będzie silnia: ");
scanf("%d", &i);
  /* for (i=0; i<=12; i++)*/
  printf("silnia %3d wynosi %10d\n" ,i, silnia(i));
  return 0;

}


int silnia(int n){
  int i; long silnia=1;
  for (i=1; i <=n; i++) silnia *= i;
  return silnia;


}
