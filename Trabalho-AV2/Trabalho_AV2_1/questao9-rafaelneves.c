//Matricula: 0050015993
#include <stdio.h>

int main()
{
//variaveis
int i, t, vetor[10], maior, tam[10];
//declaracoes
i = 0;
t = 0;

printf("|==================================QUESTAO_09===================================|\n");


for (i = 0; i < 10; i++){
	printf ("Insira o vetor %d: ", i+1);
	scanf ("%d", &vetor[i]);
}
printf ("\n\n");
//printar vetor
printf ("Vetor A:[ ");
for (i = 0; i < 10; i++){
	printf ("%d ", vetor[i]);
}
printf ("]");

//declarando todos os tam = 1;
for (i = 0; i < 10; i++){
	tam[i] = 1;
}


for (i = 0; i < 10; i++){
	if (vetor[i] == vetor[i+1]) tam[t]++;
	if (vetor[i] != vetor[i+1]) t++;
	
}
/*teste de guardar repeticoes
for (i = 0; i < 10; i++){
printf ("%d", tam[i]);
}
*/
//procura
t = 0;
for (i = 0; i < 10; i++){
	if (tam[i] > t) t = tam[i];
}
printf ("\nt = %d", t);

printf("\n|===============================================================================|");
printf("\n| --[� 2018 Rafael Neves All Rights Reserved (www.linkedin.com/in/rfneves96)]-- |");
printf("\n|===============================================================================|\n");

getch();
return 0;
}
