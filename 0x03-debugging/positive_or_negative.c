#include "main.h"
/**
 * main - Determine if number is  positive, negative or zero.
 (* 0 : is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "Negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "Positive");
}
else
{
printf("%d is %s\n", i, "zero");
} 
return;

}
