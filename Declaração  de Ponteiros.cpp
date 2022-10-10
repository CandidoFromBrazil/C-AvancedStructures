#include <stdio.h>

int main(void){
	//------------------
	const int i = 10;
	
	printf("%d\n",i);
	printf("%d\n",i +1);
	printf("%d\n",i);
	//------------------
	int x = 5;
	 //Declarando um ponteiro, que retorna o endere�o de uma vari�vel int. PONTEIRO 1
	int *pt_x;
	//*ponteiro para ponteiro do tipo inteiro* PONTEIRO 2
	int ** pt2; 
	//Operador un�rio �&� ou ponteiro constante - Tem a fun��o de obter o endere�o de mem�ria de uma vari�vel, pt_x apontadndo x.
	pt_x = &x; 
	pt2 = &pt_x;
	//Alterando o valor da vari�vel, que tem seu endere�o apontada pelo ponteiro.
	*pt_x = 50; 
	//sa�da do endere�o de x, pelo ponteiro pt_x.
	printf("Endereco apontado por pt_x: %x (variavel x)\n", pt_x);
	//sa�da do valor de x, pelo ponteiro pt_x, alterado.
	printf("Valor indiretamente alterado da variavel x, via pt_x: %d\n", *pt_x);
	//Alterando o valor da vari�vel, indiretamente via um ponteiro intermediario (pt2>pt_1>x)
	**pt2 = 100; 
	//sa�da do valor de x, alterada indiretamente por 2 ponteiros.
	printf("Valor indiretamente alterado da variavel x, via um terceiro ponteiro, pt2: %d\n",**pt2); 
	//sa�da do endere�o de x, pelo ponteiro pt2.
	printf("Endereco apontado por pt2: %x (pt_x)\n", pt2); 
		
	return 0;
}
