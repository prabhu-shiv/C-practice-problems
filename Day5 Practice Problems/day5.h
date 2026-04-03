#ifndef DAY5_H
#define DAY5_H

#include <stdio.h>

#define MAX 10

/* ================= Q1: Student ================= */
struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};

void input_students(struct Student s[], int n);
void display_students(struct Student s[], int n);

/* ================= Q2: Complex ================= */
struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b);
struct Complex subtract(struct Complex a, struct Complex b);
struct Complex multiply(struct Complex a, struct Complex b);

/* ================= Q3: Billing ================= */
float calculate_total(float price[], int qty[], int n);
float calculate_discount(float total);
void print_bill(float price[], int qty[], int n);

/* ================= Q4: Snake & Ladder ================= */
void play_game();

#endif