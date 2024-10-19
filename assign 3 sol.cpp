#include<stdio.h>
#include<conio.h>
int main(){
	int fahrenheit,celsius;
	printf("the temperature in fahrenheit is 30");
	scanf("%f", &fahrenheit);
	celsius=('fahrenheit_32')*5/9;
	printf("the temperature in celsius:%.2f\n",celsius);
	getch();
}