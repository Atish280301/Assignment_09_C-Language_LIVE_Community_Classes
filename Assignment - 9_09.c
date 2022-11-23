/*Assignment - 9 C Language LIVE Community Classes MySirG*/
/*9. Write a program to print the squares of first 10 natural numbers in reverse order*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num = 10;
	
	while(num >= 1)
	{
		int square = pow(num,2);
		
		printf("%d\n",square);
		
		num --;
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/