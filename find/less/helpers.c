/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    //     look at middle of array
    // if element you're looking for
    //     return true
    // else if element is to left
    //     search left half of array
    // else if element is to right
    //     search right half of array
    // else
    //     return false

    int start = 0;
    int end = n - 1;
    do
    {
        int mid = (start + end) / 2;
        if (value == values[mid])
        {
            return true;
        }
        else if (value < values[mid])
        {
            end = (mid - 1);
        }
        else if (value > values[mid])
        {
            start = (mid + 1);
        }
    }
    while (start <= end);

    return false;

    // if (n < 0)
    // {
    //     return false;
    // }
    // else
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (values[i] == value)
    //         {
    //             return true;
    //         }
    //     }
    // }
    // return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < (n - 1); i++)
        {
            if(values[i + 1] < values[i])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
            }
        }
    }
}
