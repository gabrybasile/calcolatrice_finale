#include <stdio.h>
#include "calc.h"

int main (){
int ris = 0  ; 
int a ; 
int b  ; 
char scelta ; 

printf("+)somma \n");
printf("-)addizione \n");
printf("*)moltiplicazione \n");
scanf("%c" , &scelta ) ;
printf("inserisci il primo valore \n"); 
scanf("%d" , &a);

printf("inserisci il secondo valore\n");
scanf("%d" , &b);

switch (scelta){

 case '+':
     ris = somma(a  , b ); 
     break ; 

  case '-' :
    ris = differenza( a, b);
    break  ;  

     case '*' :
    ris = moltiplicazione( a, b);
    break  ;  
 

     



}

printf("il risultato e %d\n " , ris) ; 





    return 0 ; 
}