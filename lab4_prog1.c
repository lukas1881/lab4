#include<stdio.h>
#include<math.h>

float pprost(float i,float j){
return sqrt(i*i+j*j);
}

int main(){
  float bok1[]={3,5,1};
  float bok2[]={4,5,6};  
  int i;
  printf("trójkąt bok1 bok2 pporst\n");
  for (i=0; i<=3; i++)
    printf("%7d%4.0f%4.0f%4.0f\n", i, bok1[i], bok2[i], pprost(bok1[i], bok2[i]));

  return 0;
}
