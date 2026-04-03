#ifndef DAY3_4_H
#define DAY3_4_H

#include <stdio.h>

/* Q1 Sorting */
void sort_ascending(int arr[], int size);
void sort_descending(int arr[], int size);

/* Q2 Swap */
void swap(int *a, int *b);

/* Q3 Max Min */
void find_max_min(int arr[], int size, int *max, int *min);

/* Q4 Set operations */
void set_union(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size);
void set_intersection(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size);
void set_difference(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size);

/* Q5 Remove duplicates */
int remove_duplicates(int arr[], int size);

/* Q6 Linear search */
int linear_search(int arr[], int size, int key);

/* Q7 Binary search */
int binary_search(int arr[], int size, int key);

/* Q8 Sum of product */
int sum_of_products(int arr[], int size);

/* String functions */
int str_length(char str[]);
void to_uppercase(char str[]);
void reverse_string(char str[]);
int is_palindrome_str(char str[]);
void concat_strings(char dest[], char src[]);

/* Matrix */
void create_matrix(int mat[5][5]);
void display_matrix(int mat[5][5]);
void transpose(int mat[5][5], int result[5][5]);
void column_sum(int mat[][10], int rows, int cols, int result[]);
int is_sparse(int mat[][10], int rows, int cols);

/* Recursion */
int power(int base, int exp);
int factorial(int n);
double series(double x, int n);

/* Macros */
#define SQUARE(x) ((x)*(x))
#define CONCAT(a,b) a##b

#endif