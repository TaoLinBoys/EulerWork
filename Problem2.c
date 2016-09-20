#include <stdio.h>
#include <stdlib.h>


int nFib(int n){
  if(n==1 || n==2){
    return n;
  }
  return nFib(n-1)+nFib(n-2);
}

int main(){
  int sum;

  int i;
  for(i=2; nFib(i)<4000000; i++){
    if( !(nFib(i)%2) ){
      sum += nFib(i);
    }
  }

  printf("%d\n",sum);
  return 0;
}
