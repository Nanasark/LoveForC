#include <stdio.h>
#include <stdlib.h>

int main(){
  int num =1;
  while (num<10){
    printf("%d\n",num);
    num++;
  }
  
  int bee = 1;
  while (1){
    printf("%d\n", bee);
    bee++;
    if (bee==100){
      break;
    }
  }
}
