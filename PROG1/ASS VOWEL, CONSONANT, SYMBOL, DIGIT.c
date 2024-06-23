#include <stdio.h>

int main(){
	char character;
	printf("Enter a character: ");
	scanf("%c", character);
	
				if (character >=65 && character <= 90 || character >= 97 && character <= 122)
			{
				if(character == 'a'||character =='A'||character == 'e'||character =='E'||character =='i'||character =='I'||character =='o'||character =='O'||character =='u'||character =='U')
				{
					printf("This is a vowel.");
				}
				else
				{
					printf("This is a consonant.");
				}
			}
			else if(character >=48 && character <=57)
			{
				printf("This is a digit");
			}
			else
			{
				printf("This is a special character.");
			}
	
	return 0;
}
