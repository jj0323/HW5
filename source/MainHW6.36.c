#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringReverse(char string[]);

int main()
{
	char string[20];
	printf("�п�J�n�˦L�r�ꤺ�e:\n");
	fgets(string, 20, stdin);
	printf("�˦L�r�ꤺ�e��      :\n");
	stringReverse(string);

	system("pause");
	return 0;
}
int i = 0;
void stringReverse(char string[])
{
	if (string[i] != '\0')
	{
		i++;
		stringReverse(string);
		printf("%c", string[i - 1]);
		i--;
	}

}