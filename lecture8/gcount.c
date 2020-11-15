#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcount(void *key, void *arr, int n, size_t elemsz)
{
    return -1;
}

int main(int argc, char *argv[])
{
    int scores[] = {12, 45, 23, 75, 11, 45, 23};
    int size_scores = sizeof(scores) / sizeof(scores[0]);
    int score_key = 23;
    float prices[] = {3.99, 2.55, 128.45, 7.88};
    int size_prices = sizeof(prices) / sizeof(prices[0]);
    float price_key = 7.88;
    char *letters = "CS106 rocks my world!";
    int size_letters = strlen(letters);
    int letter_key = 'o';
    printf("Count of %d = %d\n", score_key, gcount(&score_key, scores, size_scores, sizeof(scores[0])));
    printf("Count of %g = %d\n", score_key, gcount(&price_key, prices, size_prices, sizeof(prices[0])));
    printf("Count of %c = %d\n", score_key, gcount(&letter_key, letters, size_letters, sizeof(letters[0])));
}