/*Program sprawdza liczby doskonale*/
#include<stdio.h>
#include<math.h>

int doskonala(int m){
  int dz;
  int sumadz=0;
  for (dz=1;dz<m;dz++)
  if (m%dz==0) sumadz+=dz;
return (m==sumadz);
}

int main(){
  int i;
  for (i=1; i<=1000; i++) if (doskonala(i))
			    printf("liczba %4d jest doskonala\n", i);
  return;
}

