#include <cs50.h>

#include <stdio.h>

void print (int times);
int main (void)
{
    
    
int times = get_int("Number of times for Edna and Kiki: \n ");
     print(times);
    
}

void print(int times)
{
    
    for (int i = 0 +1; i <= times; i++)
        
    {
        printf("The number of %i of times I have told you that Enda and Kiki are fighting to bring justice to the streets of the city of Los Santos \n", i);
    }
    
    printf("\n");
}


