#include "PSO.h"

/* メイン */
int main(void){

  Particle P;

  P = ExecPSO();
  for(int j=0; j<Nvariables; j++){
    printf("%f ", P->x_star[j]);
  }
  cout << "最適値 = " << P->pbest << endl;

  return 0;
}
