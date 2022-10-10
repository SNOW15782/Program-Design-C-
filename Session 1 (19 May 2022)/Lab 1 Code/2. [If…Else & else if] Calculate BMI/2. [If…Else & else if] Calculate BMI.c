#include <stdio.h>
int main (){

    float height, weight, BMI; //declare the float number
    int NONE; //declare the int number

    printf("Enter Height in meter (m): "); //user enter height
    scanf ("%f", &height); //height data will store here

    printf("Enter Weight in kilogram (kg): "); //user enter weight
    scanf ("%f", &weight); //weight will store here

    BMI = weight / (height*height); //declare the operator to get the BMI
    printf ("Your Body Mass Index (BMI) is %f\n", BMI);

    if (BMI<18.5) //comparison
    {
        printf("You are Underweight\n"); //if it's true
    }

    else if (BMI >= 18.5 && BMI <25) //comparison
    {
        printf("You are Normal\n"); //if it's true
    }

    else if (BMI>= 25 && BMI <=30) //comparison
    {
        printf("You are Overweight\n"); //if it's true
    }

    else
        printf("You are Obese\n"); //if it's all false

return (0);
}
