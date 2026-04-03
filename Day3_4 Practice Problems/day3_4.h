#ifndef DAY3_4_H
#define DAY3_4_H

#include <stdio.h>
#include <math.h>

/* Sorting */
void sort_ascending(int arr[], int size);
void sort_descending(int arr[], int size);

/* Swap */
void swap(int *a, int *b);

/* Max Min */
void find_max_min(int arr[], int size, int *max, int *min);

/* Set operations */
void set_union(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size);
void set_intersection(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size);
void set_difference(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size);

/* Array */
int remove_duplicates(int arr[], int size);
int linear_search(int arr[], int size, int key);
int binary_search(int arr[], int size, int key);
int sum_of_products(int arr[], int size);

/* Strings */
int str_length(char str[]);
void to_uppercase(char str[]);
void reverse_string(char str[]);
int is_palindrome_str(char str[]);
void concat_strings(char dest[], char src[]);

/* Date */
void print_date(int d, int m, int y);

/* Matrix */
void create_matrix(int mat[5][5]);
void transpose(int mat[5][5], int res[5][5]);
void column_sum(int mat[][10], int r, int c, int res[]);
int is_sparse(int mat[][10], int r, int c);

/* Recursion */
int power(int b, int e);
int factorial(int n);
double series(double x, int n);

/* Macros */
#define SQUARE(x) ((x)*(x))
#define CONCAT(a,b) a##b

#endif