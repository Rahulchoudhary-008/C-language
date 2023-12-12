#include<stdio.h>
int main ()
{
	char ch;
	printf("please enter a vowel");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A':
		case 'a':
			printf("you choose %c",ch);
			break;
		case 'E':
		case 'e':
			printf("you choose %c",ch);
			break;
	    case 'I':
		case 'i':
			printf("you choose %c",ch);
			break;
		case 'O':
		case 'o':
			printf("you choose %c",ch);
			break;
		case 'U':
		case 'u':
			printf("you choose %c",ch);
			break;
		defult:
			printf("Invalid Choice");
	}
	return 0;
}
