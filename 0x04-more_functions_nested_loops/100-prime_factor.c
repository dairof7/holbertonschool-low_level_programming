#include <stdio.h>

int main(){
	long int numero=612852475143, i=2;

	while(i<=numero)
	{
		if((numero%i)==0)
		{
			if (numero != i){
				printf("%ld, ",i);
				numero=numero/i;
				continue;
			}
			else
			{
				printf("%ld\n",i);
			}
		}
		i++;
	}

	return (0);
}
