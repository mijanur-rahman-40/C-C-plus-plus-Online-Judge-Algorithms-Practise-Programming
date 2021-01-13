#include <stdio.h>
#include <math.h>

int main()
{
    float val;
    float fVal,cVal;

    printf("Enter a float value: ");
    scanf("%f",&val);

    fVal=floor(val);
    cVal =ceil(val);
    printf("floor value:%0.1f \nceil value:%0.1f\n",fVal,cVal);
    return 0;
}
