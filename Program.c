// Given the length and breadth of a rectangle,
// write a program to find whether the area of the rectangle is greater than its perimeter. For example,
// the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.


#include<stdio.h>
#include<conio.h>
int main()
{
    int l, b, area, per;
    printf("\n Enter Length of a Rectangle : ");
    scanf("%d", &b);

    printf("\n Enter Breadth of a Rectangle : ");
    scanf("%d", &l);

    area = l * b;
    per = 2*(l + b);

    printf("Area of a Rectangle = %d\n", area);
    printf("Perimeter of a Rectangle = %d\n", per);

    if (area>per)
        printf("Area of a Rectangle is Greater Then Its Perimetre");
    else
        printf("Perimetre of a Rectangle is Greater Then Its Area");

    return 0;
}
