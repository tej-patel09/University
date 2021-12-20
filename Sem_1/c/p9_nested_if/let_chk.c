#include<stdio.h>
void main()
{
	char ch;
	 printf("\nenter character ");
	 scanf("%c",&ch);

	 if(ch>='a' && ch<='z')
	 {
		printf("The letter is small \n");			
	 }
	 else if(ch>='A' && ch<='Z')
	 {
		printf("The letter is capital \n");			
	 }
	 else if(ch>='0'&& ch<='9' )
	 {
	 	printf("The letter is digit \n");
	 }
	 else
	 {
	 	printf("The letter is special char \n");	
	 }
}