#include <stdio.h>
#include <stdlib.h>
 
//int t, y, z, 
//int a, b, x, n, c, d, m;

int hash(int a, int b, int x, int m, int c, int d, int n){

  //printf("%d %d %d %d\n ", a, b, x, m);
  //printf("%d %s %d %s %d %s %d\n ", a, " * ", x, " + " ,b , "mod ", m);
  //int y = (a1*x1+b1) % m1;
  //return y;
  int y;
  int hit = 0;

  for(int i = x; i <= n; i++){
    //printf("%d %s %d %s %d %s %d\n ", a, " * ", i, " + " ,b , "mod ", m);
    y = ((a*i)+b) % m;
    //printf("%d\n ", y);
    if(y >= c && y <= d){
      hit++;
    }
  }

  //printf("%d\n ", hit);
  return hit;

}
 
int main(void) {
  int t;
  int count = 0;
  int a,b,x,n,c,d,m;

  printf("%s\n", "Input:");
  // Recebe o numero de entradas
  scanf("%d", &t);
  if(t > 10000){
    return 0;
  }
  int hits[t];
  int hit;
  int countHit = 0;
  
  int result;
  int countHits2 = 0;

  while(count < t){
    hit = 0;
    //printf("%d\n", count);
    // Recebe os Parametros a,b,x,n,c,d,m
    scanf("%d %d %d %d %d %d %d", &a, &b, &x, &n, &c, &d, &m);

    if( m < 1 || m > 100000000000000 || c > d || d >= m || a >= m || b >= m || (x+n) > 1000000000000000 || (a*(x+n) + b) > 1000000000000000){
      return 0;
    } 

      /*for(int i = x; i <= n; i++){

      printf("%d\n", i);
      int teste = hash(a,b,i,m);
      printf("%d\n", teste);
      if(teste >= c && teste <= d){
        hit++;
        printf("%d\n", teste);
        printf("%s\n", "Hit");
        hits[countHit] = hit;
        countHit++;
      }
    }*/

    hits[countHits2] = hash(a, b, x, m, c, d, n);
    countHits2++;

    count ++;
  }
  printf("%s\n", "Output:");
  for(int j = 0; j < countHits2; j++){
     printf("%d\n", hits[j]);  
  }
  return 0;
}
