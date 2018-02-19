/*
@autor:
 * Jhon velasco
 * @ frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
#include <stdio.h>
int main () {
int num,resto,n=0,i,j,invertido=0,palindromo=0,pmayor=0,n1,n2;
for(i=999;i>=0;i-=1){
		for(j=999;j>=0;j-=1){
			invertido=0;
			num=i*j;
			n=num;
			while(n!=0){//invertir un numero de n digitos
         		resto=n%10;
         		n=n/10;         
         		invertido=invertido*10+resto;
       		}
			if (invertido==num){//comprobar si el numero invertido es palindromo
				palindromo=num;
				if(pmayor<=palindromo){//comprobar si el palindromo encontrado es el mayor de la lista	
					pmayor=palindromo;
					n1=i;
					n2=j;
				}
				break;
			}
		}
	}
		printf("palindromo %d \n",pmayor);//muestra el palindromo
		printf("%d \n", n1);//muestra el primer digito del producto que genero el palindromo
		printf("%d",n2);//muestra el segundo digito del producto que genero el palindromo
	}

