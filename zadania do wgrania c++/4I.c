#include <stdio.h>  //file should be named as 4.c, not 4.cpp, ok
int main () 
{

int my_int;
printf("Enter an integer number: ");
scanf("%d", &my_int);
printf("Your number in hexadecimal system is %x (%#x) \n", my_int, my_int);  // printf("Your number in hexadecimal system is %x (%#x) \n", my_int, my_int); 

float my_float;
printf("Enter a double number: ");
scanf("%f", &my_float);
printf("Your number is %E \n", my_float);

char my_char;
printf("Enter one character: ");
getchar();
scanf("%c" , &my_char);
printf("Your character is %c and its value is equal to %d \n", my_char, my_char); //printf("Your character is %c and its value is equal to %d \n", my_char, my_char);

char my_two_words[30];
printf("Enter your string consist of two words: ");
getchar();
fgets(my_two_words, sizeof (my_two_words), stdin);
puts(my_two_words);

    return 0;
}