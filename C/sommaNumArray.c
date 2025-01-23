/*
    Codice fornito da Davide G. Allegra [www.davideallegra.it]
    Superprof.it | Repository di esercizi di programmazione
    -
    Linguaggio: C
    Argomenti: input, array, cicli
    -
    Somma di numeri interi, inseriti dall'utente, in un array
*/

#include <stdio.h>

int main()
{
    int dim, sum = 0;

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &dim);
    int array[dim];

    for (int i=0; i<dim; i++)
    {
        printf("[%d] Inserisci un numero: ", i+1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("La somma degli elementi e': %d\n", sum);

    return 0;
}
