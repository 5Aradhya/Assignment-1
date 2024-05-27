#include <stdio.h>
int main()
{
    float km = 12;
    // 1 km = 0.5294
    float miles = 0.5294;
    printf("your converted km per hour into miles is:");
    printf("%f miles per hour", (km * miles));
}
