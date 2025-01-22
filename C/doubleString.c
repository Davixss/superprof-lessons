#include <stdio.h>
#include <string.h>

#define STR_LEN 50

int doubleString(char *str)
{
    int len = strlen(str);
    
    // Se è dispari ritorna 0
    if (len % 2 != 0) 
        return 0;
        
    int half = len / 2;
    
    for (int i=0; i<half; i++)
    {
        if (str[i] != str[half+i])
            return 0;
    }
    
    return 1;
}

int main()
{
    char input[STR_LEN];
    
    printf("Inserisci una stringa: ");
    fgets(input, STR_LEN, stdin);
    
    // Controlla se il carattere "\n" è presente e rimuoverlo
    size_t len = strlen(input);
    if (len > 0 && input[len-1] == '\n') 
        input[len - 1] = '\0';
    
    if (doubleString(input) == 0)
        printf("NON è presente una doppia stringa!");
    else
        printf("E' presente una doppia stringa!");
    
    return 0;
}