#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void buscar_string (char arqtxt[15], char busca[150]){
	
	FILE *arquivo;
	int valor=0, c , l , i ,x,comeco;
	char linha [1000], compar[1000];
	
	arquivo=fopen(arqtxt,"r");
	if(arquivo==NULL)
	   printf("Arquivo nao encontrado");
	else
	    for(l=0; !feof(arquivo); l++)
		{
			fgets(linha, 1000,arquivo);
			comeco=0;
			while(comeco<=(strlen(linha)-strlen(busca)))
			{
				x=0;
				for(c=comeco; c<(strlen(busca)+comeco);c++)
				{
					compar[x]=linha[c];
					x++;
				}
				if(strcmp(compar,busca)==0)
				{ 
				     valor++;
				printf("\n%dª Aparece na -- Linha:%d Coluna:%d",valor,l+1,comeco+1);     
			    }
				comeco++;   
			}
	    }
		fclose(arquivo);   
    }
        
