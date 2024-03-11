#include <stdio.h>
int main()
{
    float len,bre;
    printf("Enter the length and breadth of the reactangle: ");
    scanf("%f%f", &len,&bre);
    float Area=len*bre;
    float Perimeter=2*(len+bre);
    printf("Area of a rectangle is %f",Area);
    printf("\n");
    printf("Perimeter of a rectangle is %f",Perimeter);
}