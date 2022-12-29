#include <stdio.h>
#include <stdlib.h>

int main()

{

double weight = 0;
double height = 0;


printf("Please enter your weight!\n");
scanf("%lf", &weight);
printf("Next,enter your height!\n");
scanf("%lf", &height);

double bmi = weight/(height*height);

printf("Your BMI is %lf!\n", bmi);

if ( bmi >= 24.0 )
{
   printf("You is a pig!\n");
} 

if ( bmi <= 18.5 )
{
   printf("You is a monkey!\n");
}

system("pause");

}