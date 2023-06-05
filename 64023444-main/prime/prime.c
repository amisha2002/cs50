#include <cs50.h>
#include <stdio.h>
#include<stdlib.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i)&& i>1)
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // TODO
    int flag=0, i;

    for(i=2;i<=number/2;i++) {
    if(number%i==0) {
        flag=1;
        break;
    }
    else {
    flag=0;
    }
    }
    if(flag==0) {
        return true;
    }
    else {
    return false;
    }

}
