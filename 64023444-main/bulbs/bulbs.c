#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO

    int ar[100];
    string str = get_string("enter the string ");
    int i;
    for(i=0;i<strlen(str);i++) {
int j=0;
        int a=str[i];
        
        for( j=0;j<8;j++) {
        while(a>0) {
        ar[j] = a%2;
        a=a/2;
        j++;
        }
        ar[j]=0;
        }
        for(j=j-1;j>=0;j--) {
        print_bulb(ar[j]);
        }

        printf("\n");
    }

}


void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
