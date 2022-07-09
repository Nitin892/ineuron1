// 1. Write a program to print Hello Students on the screen.
#include <stdio.h>
int main()
{
    printf("Hello Student");
    return 0;
}

// 2. Write a program to print Hello in the first line and Students in the second line
#include <stdio.h>
int main()
{
    printf("Hello \nStudent");
    return 0;
}

// 3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
#include <stdio.h>
int main()
{
    printf("\"MySirg\"");
    return 0;
}

/* 4. WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float r, area;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = M_PI * r * r;
    printf("Area of circle is %f having the radius %f", area, r);
    return 0;
}

// 5. WAP to calculate the length of String using printf function.

#include <stdio.h>
int main()
{
    char s[] = "MySirG";
    int length = sizeof(s) / sizeof(s[0]) - 1;
    printf("%d", length);
    return 0;
}

// 6. WAP to print the name of the user in double quotes.

#include <stdio.h>
int main()
{

    char user[] = "Hello , Amit Kumar";

    printf("\"%s\"", user);
    return 0;
}

// 7. WAP to print “%d” on the screen.

#include <stdio.h>
int main()
{

    printf("\%%d");
    return 0;
}

// 8. WAP to print “\n” on the screen.

#include <stdio.h>
int main()
{

    printf("\\n");
    return 0;
}

// 9. WAP to print “\\” on the screen.

#include <stdio.h>
int main()
{

    printf("\\\\");
    return 0;
}

// 12. Find output of below code

int main()
{
    int x = printf("ineuron");
    printf("%d", x);
    return 0;
}
// Output ineuron7