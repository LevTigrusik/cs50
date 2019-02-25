/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    /* BINARY SEARCH */
    int lower = 0;
    int upper = n - 1;
    while (lower <= upper)
    {
        int middle = (lower + upper) / 2;
        if (value == values[middle])
        {
            return true;
        }
        else if (value > values[middle])
        {
            lower = middle + 1;
        }
        else if (value < values[middle])
        {
            upper = middle - 1;
        }
    }
    return false;

    /* LINEAR SEARCH
    for (int i = 0; i < n; i++)
    {
        if (value == values[i])
        {
            return true;
        }
    }

    return false;
    */
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // Implement an O(n^2) sorting algorithm
    int swap_count;
    do
    {
        swap_count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swap_count++;
            }
        }
    }
    while (swap_count != 0);
    return;
}
