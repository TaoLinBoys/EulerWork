#include <stdio.h>
#include <stdlib.h>


int main(){
  int sum;

  int i;
  for(i=3; i<1000; i++){
    if( !(i%3) || !(i%5) ){
      sum += i;
    }
  }

  printf("%d\n",sum);
  return sum;

}
