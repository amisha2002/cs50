// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    for (int i=0;i<n;++i) {
        for (int j=i+1;j<n;++j)
        if(array[i] > array[i+1]) {
            int temp =  array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
        printf("%i ",array[i]);
    }
    return array[n-1];
}
