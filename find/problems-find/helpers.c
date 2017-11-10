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
    if (n < 0)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (values[i] == value)
            {
                return true;
            }
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 0; i < (n - 2); i++)
    {
        if(values[i + 1] < values[i])
        {
            int temp = values[i];
            values[i] = values[i + 1];
            values[i + 1] = temp;
        }
    }
    for(int j = 0; j < n; j++)
    {
        printf("%i\n", values[j]);
    }
}

// var swaps = 0;
//     for (var i = 0; i < n; i++) {
//         for (var j = 0; j < n - 1; j++) {
//             if (a[j] > a[j + 1]) {
//                 var tmp = a[j];
//                     a[j] = a[j + 1];
//                     a[j + 1] = tmp;
//                 swaps++;
//             }
//         }
//             if (swaps == 0) {
//                 break;
//             }
//     }