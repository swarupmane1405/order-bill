
#include<stdio.h>
#include<conio.h>

int main()
{
int a;

printf("Enter your choice from 1 to 5:");
scanf("%a", a);



switch(a)
{
case 1:
	printf("Food item - PIZZA\n PRICE - Rs 239");
	break;
case 2:
	printf("Food item - BURGER\n PRICE - Rs 129");
	break;
case 3 :
	printf("Food item - PAST\n PRICE - Rs 179");
	break;
case 4 :
	printf("Food item - FRENCH FRIEES\n PRICE - Rs 99");
	break;
default:
	printf("Food item - SANDWICH\n PRICE - Rs 149");


}
getch();
return 0;
}
