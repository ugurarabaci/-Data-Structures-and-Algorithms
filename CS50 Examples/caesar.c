#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string args[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }
    int k = atoi(args[1]);
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
            continue;
        }
        char m= 'A';
        char pi=plaintext[i];
        if(islower(pi)) m='a';
        int ci = (pi - m + k) % 26 +m;

        printf("%c", ci);
    }
        
    printf("\n");
    return 0;
    
}
