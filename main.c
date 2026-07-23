#include<stdio.h>

void prime_number();

int main()
{
    prime_number();
    return 0;
}

void prime_number()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 10; i++)
    {
        int count = 0;

        for(int j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("Prime number: %d\n", arr[i]);
        }
    }
}
