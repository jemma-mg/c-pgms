/*Make a C++ program to print grades based on scores entered*/

#include <iostream>
using namespace std;
int main()
{
    int mark = 50;
    if (mark >= 90)
    {
        printf("A Grade");
    }
    else if (mark >= 80 && mark < 90)
    {
        printf("B Grade");
    }
    else if (mark >= 70 && mark < 80)
    {
        printf("C Grade");
    }
    else if (mark >= 60 && mark < 70)
    {
        printf("D Grade");
    }
    else if (mark >= 50 && mark < 60)
    {
        printf("E Grade");
    }
    else if (mark >= 40 && mark < 50)
    {
        printf("P Grade");
    }
    else
    {
        printf("F Grade");
    }
    return 0;
}