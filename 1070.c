#include <stdio.h>
int main(){

 int i, X, howManyOdd = 6;
 scanf("%d", &X);
 for( i = X; i < (X+(howManyOdd*2)) ; i+=2){
  int odd;
  if(i % 2 == 0){
   odd = i + 1;
   printf("%d\n", odd);
  }else{
   odd = i;
   printf("%d\n", odd);
  }
 }
 return 0;
}
