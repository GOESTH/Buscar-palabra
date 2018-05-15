
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	
   char frase[127],palabra[127], opcion;
    int tampa , inicio, i, tamfra;
    
    tampa = 0;
    inicio=0;
    
    printf("Ingresa una frase: ");
    
    gets(frase);
 
    printf("Ingrese la palabra a buscar: ");
    
    scanf("%s",palabra);
    
    tamfra = strlen(frase);
    
    for( i = 0; i <= tamfra; i++){
    	
    	
    	if(palabra[ tampa] == frase[i]){
    		
            ++tampa;  
                
        }else{
        	
		 tampa = 0;	
		 
		}
		
    	if( i == tamfra && tampa == 0){
    		
    		inicio = 'N';    		
    		
		}
		
		   inicio= (2 + i -  tampa);
        
		
    }
 
    if(opcion != 'N' ){
    	
    	printf("La palabara que ingresaste para buscar esta en la poscion: %d\n Rcuerda que se cuentan las posiciones desde el 1 que es la primera letra de la frase, contando los espacios.", inicio);  	
    	 
    	 
	}
    
    return 0;
}
