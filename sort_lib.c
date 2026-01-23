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

void selectionSort(int array[], int n)
{
    for(int d = 0; d < n-1; d++)
    {
        int minIndex = d;
        for(int i = d; i < n; i++)
        {
            if(array[i] < array[minIndex])
            {
                minIndex = i;
            }
        }
        int h = array[d];
        array[d] = array[minIndex];
        array[minIndex] = h;
    }
}

void insertSort(int array[], int n)
{
    for(int d = 1; d < n; d++)
    {
        int inserted = array[d];
        int i = d;
        while((i < d) && (array[i-1] < inserted))
        {
            p[i] = p[i-1];
            i--;
        }
        p[i] = vkladany;
    }
}
