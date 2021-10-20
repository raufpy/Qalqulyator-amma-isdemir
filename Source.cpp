#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include<math.h>
#include<conio.h>


/*int main()
{
	float flo1{}, flo2{}, flocal{};
	char op;
	char symbol=251;
		printf("Choose an operator: [+,-,/,*,%%,√]\n", symbol);
		scanf_s(" %c",&op);
		if (op == '+')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 + flo2;
			printf("The Result Is: %f", flocal);
		}
		else if (op == '-')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 - flo2;
			printf("The Result Is: %f", flocal);
		}
		else if (op == '*')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 * flo2;
			printf("The Result Is: %i", flocal);
		}
		else if (op == '/')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 / flo2;

			printf("The Result Is: %f", flocal);
		}
		else if (op == '%')
		{
			float percentage{}, value{}, total{};
			printf("Choose the total value: ");
				scanf_s("%f",&total);
				printf("Choose the percentage value: ");
				scanf_s("%f", &value);
				percentage = value / total * 100;
				printf("The Result Is: %f", percentage);
		}
		else if (op == symbol)
		{
			
			double srt1, num1;
			printf("Enter The Number To Find Square Root:\n");
			scanf_s("%f", &num1);
			
			srt1 = sqrt(num1);
			printf("The Square Root of %f Is %f", num1, srt1);

		}	
		else
		{
			printf("Invalid Input Detected");
		}
		return 0;
}*/


int main()
{
	float flo1{}, flo2{}, flocal{};
	char op;
	char symbol=251;
		printf("Choose an operator: [+,-,/,*,%%,√]\n", symbol);
		scanf_s(" %c",&op);
		if (op == '+')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 + flo2;
			printf("The Result Is: %f", flocal);
		}
		else if (op == '-')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 - flo2;
			printf("The Result Is: %f", flocal);
		}
		else if (op == '*')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 * flo2;
			printf("The Result Is: %i", flocal);
		}
		else if (op == '/')
		{
			printf("Enter The First Number: ");
			scanf_s("%f", &flo1);
			printf("Enter The Second Number: ");
			scanf_s("%f", &flo2);
			flocal = flo1 / flo2;

			printf("The Result Is: %f", flocal);
		}
		else if (op == '%')
		{
			float percentage{}, value{}, total{};
			printf("Choose the total value: ");
				scanf_s("%f",&total);
				printf("Choose the percentage value: ");
				scanf_s("%f", &value);
				percentage = value / total * 100;
				printf("The Result Is: %f", percentage);
		}
		else if (op == symbol)
		{
			
			double srt1, num1;
			printf("Enter The Number To Find Square Root:\n");
			scanf_s("%f", &num1);
			
			srt1 = sqrt(num1);
			printf("The Square Root of %f Is %f", num1, srt1);

		}	
		else
		{
			printf("Invalid Input Detected");
		}
		return 0;
}



/*void removeSpaces(char* Buf1)
{
	
	int count = 0;

	
	for (int i = 0; Buf1[i]; i++)
		if (Buf1[i] != ' ')
			Buf1[count++] = Buf1[i]; 
	        Buf1[count] = '\0';
}

//Testing
int main()
{
	char Buf2[] = "I   am a s tud ent";
	removeSpaces(Buf2);
	printf("Text after compressing: %s\n", Buf2);
	return 0;
}*/

/*int main()
{
	char Buf1[81], Buf2[81];
	int b = 0, c = 0;

	printf("Enter A Text:\n");
	gets_s(Buf1, sizeof(Buf1));

	while (Buf1[b] != '\0')
	{
		int a = b + 1;
			if (!(Buf1[b] == ' ' && Buf1[a] == ' ')) {
			Buf2[c] = Buf1[b];
			c++;
		}
		b++;
	}

	Buf2[c] = '\0';

	printf("Text after compressing: %s\n", Buf2);

	return 0;

}*/
