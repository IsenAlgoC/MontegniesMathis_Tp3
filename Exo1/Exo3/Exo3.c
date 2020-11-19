#include<stdlib.h>
#include<stdio.h>


int main()
{

	float tab[10];

	float note;
	int a = 0;
	int r;
	int i;

	for (i = 0; i < 10;)
	{
		printf("Entrer la numero %d : ", i + 1);
		scanf_s("%f", &note);

		if (note >= 0 && note <= 20)
		{
			tab[i] = note;
			printf("c'est tout bon \n");
			i++;
		}
		else
		{
			printf("note non acceptable \n");
			printf("taper 1 pour arreter, 2 pour continuer et 3 si eleve absent : ");
			scanf_s("%d", &r);
			if (r == 1)
			{
				printf("au revoir \n");
				break;
			}
			else if (r == 2)
			{
				printf("aller y \n");
			}
			else if (r == 3)
			{
				tab[i] = -1;
				a = a + 1;
				i++;
			}
		}
	}
	printf("il y a %d note et %d absence ", (i - a), a);


}