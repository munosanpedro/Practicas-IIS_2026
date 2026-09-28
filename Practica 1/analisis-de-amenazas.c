#include<stdio.h>

int clasificador_eventos(char eventos){
 switch(evento){
  case 'C':return 0;
  case 'I':return 1;
  case 'U':return 2;
  case 'B':return 3;
  default: return -1;
 }
}


int main(){
int  equipos_reg[20] = {0, 1, 0, 2, 3, 1, 0, 2, 3, 3, 0, 1, 1, 2, 0, 3, 2, 1, 0, 3};
char eventos_reg[20] = {'C', 'I', 'C', 'C', 'U', 'I', 'C', 'U', 'U', 'U', 'B', 'C', 'I', 'C', 'I', 'I', 'B', 'I', 'C', 'I'};
int ma_mostrar[4][4]={0};


for(int i=0; i<20; i++){
int fila_equipo = equipos_reg[i];
int columnad_eventos = clasificador_eventos(eventos_reg[i]);
 if(columnad_eventos !-1){

 ma_mostrar[fila_equipo][columnad_eventos]++;
 }




}






}
