#include <stdio.h>
#include <math.h>

int main(void){
  float n = 0;
  float resistor[100] = {0};
  int active = 1;

  printf("[Parallel resistor calculator]\n\n");

  while(active == 1){
    float sum = 0;

    printf("How many resistors in parallel?\n[Rn]: ");
    scanf(" %f", &n);

    if(n > 2){
      printf("\n\nWhat are the resistor values?\n\n");
      for(int i = 1; i <= n; i++){
        printf("[R%d]: ", i);
        scanf(" %f", &resistor[i-1]);
      }

      for(int i = 0; i < n; i++){
        sum = sum + (1/resistor[i]);
      }

      sum = (1 / sum);

      printf("\nRp = %.2f[Ohm]\n\n", sum);

    }else{
      printf("\n\nWhat are the two resistor values?\n\n");
      for(int i = 0; i < n; i++){
        printf("[R%d]: ", i+1);
        scanf(" %f", &resistor[i]);
      }
      sum = ((resistor[0]*resistor[1])/(resistor[0]+resistor[1]));
      printf("\nRp = %.2f[Ohm]\n\n", sum);
    }
  }
}
