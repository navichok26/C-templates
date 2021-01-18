// Complite
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Boolean type
typedef enum { false, true } bool;

bool is_prime(unsigned long number);

int main()
{    
    unsigned long person_num;
    scanf("%lu", &person_num);
    if (is_prime(person_num))
    {
        printf("Yeeees!!! it's prime!\n");
    } else 
    {
        printf("Ohh noo.. it's didn't prime number...\n");
    }
    return 0;
}

bool is_prime(unsigned long number)
{
    long double sq = sqrtl((long double) number);
    for (unsigned long i=2; i < sq; i++)
    {
        if (number%i == 0)
        {
            return false;
        }
    }
    return true;

}