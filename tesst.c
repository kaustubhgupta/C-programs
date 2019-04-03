#include <stdio.h>
void m();
void n()
{
    m();
}

void main()
{
    n();
    void m()
    {
        printf("hi");
    }
}
