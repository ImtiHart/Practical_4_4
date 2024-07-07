#include <stdio.h>
#include <stdlib.h>

/*Write a program that initializes an array of five float values representing the resistance of five
circuits. Then, use a pointer to iterate through the array and find the average resistance value.
Display the average.*/
float resistance[5] = {10.5, 5.43, 6.53, 7.78, 9.12}; /*Form a array of resistances*/
float *pointer = resistance; /*Create a pointer to resistance*/
float sum;
int x;
int main(){

    for (x=0; x<5; x++)
    {
        sum += *(pointer+1); /*Calculate total resistance*/
    }
    printf("%fl", sum);
    float mean = sum/5;
    printf("The average resistance is: "); /*Display mean*/
}
