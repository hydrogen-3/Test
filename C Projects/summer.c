#include <stdio.h>
#include <math.h>
int main()
{
    float var1, var2, calc;
    printf("What numbers would you want to sum? : x + y\n");
    scanf("%f %f", &var1,&var2);
    calc=var1+var2;
    printf("The answer is %2.2f", calc);
}
