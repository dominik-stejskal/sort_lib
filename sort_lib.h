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

#ifndef SORT_LIB_H
#define SORT_LIB_H

/**
 * @brief Sorts an array using the Selection Sort algorithm.
 * Complexity: O(n^2). Performs a minimal number of swaps.
 * @param array Pointer to the array to be sorted.
 * @param n Number of elements in the array.
 */
void selectSort(int array[], int n);

/**
 * @brief Sorts an array using the standard Insertion Sort algorithm.
 * Complexity: O(n^2) worst case, O(n) for nearly sorted data.
 * @param array Pointer to the array to be sorted.
 * @param n Number of elements in the array.
 */
void insertSort(int array[], int n);

/**
 * @brief Insertion Sort variant using a sentinel at the beginning.
 * NOTE: Requires array capacity of at least (n + 1).
 * @param array Pointer to the array.
 * @param n Number of elements to sort.
 */
void insertSortBegin(int array[], int n);

/**
 * @brief Insertion Sort variant using a sentinel at the end.
 * NOTE: Requires array capacity of at least (n + 1).
 * @param array Pointer to the array.
 * @param n Number of elements to sort.
 */
void insertSortEnd(int array[], int n);

/**
 * @brief Sorts an array using the basic Bubble Sort algorithm.
 * Complexity: O(n^2).
 * @param array Pointer to the array to be sorted.
 * @param n Number of elements in the array.
 */
void bubbleSort(int array[], int n);

/**
 * @brief Optimized Bubble Sort (Last Change).
 * Skips portions of the array that are already sorted.
 * @param array Pointer to the array to be sorted.
 * @param n Number of elements in the array.
 */
void rippleSort(int array[], int n);

/**
 * @brief Sorts an array using the Shaker Sort (Cocktail Sort) algorithm.
 * A bidirectional bubble sort that handles "turtles" and "rabbits" efficiently.
 * @param array Pointer to the array to be sorted.
 * @param n Number of elements in the array.
 */
void shakerSort(int array[], int n);

/**
 * @brief Standard QuickSort using Hoare partition scheme.
 * Complexity: Average O(n log n).
 * @param array Pointer to the array.
 * @param from Starting index.
 * @param to Ending index.
 */
void quickSort(int array[], int from, int to);

/**
 * @brief QuickSort using Dutch National Flag (3-way) partitioning.
 * Extremely efficient for arrays with many duplicate elements.
 * @param array Pointer to the array.
 * @param from Starting index.
 * @param to Ending index.
 */
void quickSortDNF(int array[], int from, int to);

/**
 * @brief Sorts an array using the MergeSort algorithm.
 * A stable sort with guaranteed O(n log n) complexity.
 * @param array Pointer to the array.
 * @param tempArray Pre-allocated auxiliary array of size n.
 * @param from Starting index.
 * @param to Ending index.
 */
void mergeSort(int array[], int tempArray[], int from, int to);

#endif
