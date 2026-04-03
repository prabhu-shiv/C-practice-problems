#ifndef DAY6_H
#define DAY6_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ========= Q1 ========= */
int* create_array(int n);
int linear_search(int *arr, int n, int key);
void find_max_min(int *arr, int n, int *max, int *min);
int sum_array(int *arr, int n);
void sum_even_odd(int *arr, int n, int *even, int *odd);
int is_palindrome(int *arr, int n);
void find_pair(int *arr, int n, int M);
void free_array(int *arr);

/* ========= Q2 ========= */
struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

struct Student* create_students(int n);
void search_roll(struct Student *s, int n, int roll);
void search_name(struct Student *s, int n, char name[]);
struct Student highest_marks(struct Student *s, int n);
void name_starts_A(struct Student *s, int n);
void free_students(struct Student *s);

/* ========= Q3 ========= */
struct Point {
    int x, y;
    int weight;
};

struct Point* create_points(int n);
struct Point max_weight(struct Point *p, int n);
void count_lines(struct Point *p, int n);

#endif