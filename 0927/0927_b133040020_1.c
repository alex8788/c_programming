#include <stdio.h>

int main()
{
    char id[10];
    char name[10];
    float height;
    float weight;
    char bloodType[3];
    float bmi;

    printf("Please enter your student ID: ");
    printf("Please enter your student name: ");
    printf("Please enter your student height: ");
    printf("Please enter your student weight: ");
    printf("Please enter your student blood type: ");

    scanf("%s", id);
    scanf("%s", name);
    scanf("%f", &height);
    scanf("%f", &weight);
    scanf("%s", bloodType);

    height /= 100;
    bmi = weight / (height * height);

    printf("ID:%s", id);
    printf("name:%s", name);
    printf("height:%f", height);
    printf("weight:%f", weight);
    printf("blood type:%s", bloodType);
    printf("BMI:%f", bmi);

    return 0;
}