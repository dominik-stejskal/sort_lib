/*
 * MIT License
 *
 * C opyright* (c) 2026 Dominik Stejskal
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "sort_lib.h"

void selectSort(int array[], int n)
{
    for(int d = 0; d < n-1; d++)
    {
        int minIndex = d;
        for(int i = d+1; i < n; i++)
        {
            if(array[i] < array[minIndex])
            {
                minIndex = i;
            }
        }
        int temp = array[d];
        array[d] = array[minIndex];
        array[minIndex] = temp;
    }
}

void insertSort(int array[], int n)
{
    for(int d = 1; d < n; d++)
    {
        int inserted = array[d];
        int i = d;
        while(i > 0 && array[i-1] > inserted)
        {
            array[i] = array[i-1];
            i--;
        }
        array[i] = inserted;
    }
}

void insertSortBegin(int array[], int n)
{
    for(int i = n; i > 0; i--)
    {
        array[i] = array[i-1];
    }


    for(int d = 2; d <= n; d++)
    {
        array[0] = array[d];
        int i = d;
        while(array[i-1] > array[0])
        {
            array[i] = array[i-1];
            i--;
        }
        array[i] = array[0];
    }


    for(int i = 0; i < n; i++)
    {
        array[i] = array[i+1];
    }
}

void insertSortEnd(int array[], int n)
{
    for(int d = n-2; d >=0; d--)
    {
        array[n] = array[d];
        int i = d;
        while(array[i+1] < array[n])
        {
            array[i] = array[i+1];
            i++;
        }
        array[i] = array[n];
    }
}

void bubleSort(int array[], int n)
{
    for(int d = 0; d < n-1; d++)
    {
        for(int i = n-1; i > d; i--)
        {
            if(array[i-1] > array[i])
            {
                int temp = array[i-1];
                array[i-1] = array[i];
                array[i] = temp;
            }
        }
    }
}

void rippleSort(int array[], int n)
{
    int indexLC = n;
    for(int d = 0; d < n-1; d = indexLC)
    {
        indexLC = n;
        for(int i = n-1; i > d; i--)
        {
            if(array[i-1] > array[i])
            {
                int temp = array[i-1];
                array[i-1] = array[i];
                array[i] = temp;
                indexLC = i;
            }
        }
    }
}

void ShakerSort(int array[],int n)
{
    int dL = 0;
    int dR = n-1;
    while(dL < dR)
    {
        // PHASE 1: from left

        int lastR = dL;
        for(int i = dL; i < dR; i++)
        {
            if(array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                lastR = i;
            }
        }

        dR = lastR;
        if(dL >= dR)
            break;

         // PHASE 2: from right

        int lastL = dR;
        for(int i = dR; i > dL; i--)
        {
            if(array[i-1] > array[i])
            {
                int temp = array[i];
                array[i] = array[i-1];
                array[i-1] = temp;
                lastL = i;
            }
        }
        dL = lastL;
    }
}
