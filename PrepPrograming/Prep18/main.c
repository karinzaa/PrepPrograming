#include <stdio.h>
#include <stdlib.h>

float BMI(float height, float weight)
{
    float bmi;
    bmi = weight / ((height / 100) * (height / 100));
    return bmi;
}
void formula(float bmi)
{
    if (bmi <= 18.5)
    {
        printf("underweight");
    }
    else if (bmi > 18.5 && bmi < 25)
    {
        printf("normal");
    }
    else if (bmi >= 30)
    {
        printf("odesity");
    }
}

int main()
{
    float weight, height, bmiiii;
    printf("Input height and weight:");
    scanf("%f %f", &weight, &height);
    bmiiii = BMI(weight, height);
    printf("%f", bmiiii);
    formula(bmiiii);
    return 0;
}
