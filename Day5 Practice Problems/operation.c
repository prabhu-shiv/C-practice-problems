#include "day5.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/* ================= Q1 ================= */
void input_students(struct Student s[], int n){
    for(int i=0;i<n;i++){
        printf("\nStudent %d\n", i+1);
        printf("Roll: "); scanf("%d",&s[i].roll);
        printf("Name: "); scanf("%s",s[i].name);
        printf("Age: "); scanf("%d",&s[i].age);
        printf("Marks: "); scanf("%f",&s[i].marks);
    }
}

void display_students(struct Student s[], int n){
    printf("\n--- Students ---\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%d\t%.2f\n",
        s[i].roll,s[i].name,s[i].age,s[i].marks);
    }
}

/* ================= Q2 ================= */
struct Complex add(struct Complex a, struct Complex b){
    struct Complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}

struct Complex subtract(struct Complex a, struct Complex b){
    struct Complex c;
    c.real=a.real-b.real;
    c.imag=a.imag-b.imag;
    return c;
}

struct Complex multiply(struct Complex a, struct Complex b){
    struct Complex c;
    c.real=a.real*b.real - a.imag*b.imag;
    c.imag=a.real*b.imag + a.imag*b.real;
    return c;
}

/* ================= Q3 ================= */
float calculate_total(float price[], int qty[], int n){
    float total=0;
    for(int i=0;i<n;i++)
        total+=price[i]*qty[i];
    return total;
}

float calculate_discount(float total){
    if(total<1000) return total*0.05;
    else if(total<5000) return total*0.10;
    else return total*0.15;
}

void print_bill(float price[], int qty[], int n){
    float total=calculate_total(price,qty,n);
    float discount=calculate_discount(total);

    printf("\nItem\tPrice\tQty\tSubtotal\n");
    for(int i=0;i<n;i++){
        printf(" %d\t%.2f\t %d\t%.2f\n",
        i+1,price[i],qty[i],price[i]*qty[i]);
    }

    printf("\nTotal: %.2f\n",total);
    printf("Discount: %.2f\n",discount);
    printf("Final: %.2f\n",total-discount);
}

/* ================= Q4 ================= */

int roll_dice(){
    return rand()%6+1;
}

int snakes(int pos){
    if(pos==37) return 7;
    if(pos==47) return 4;
    if(pos==52) return 11;
    if(pos==58) return 40;
    if(pos==63) return 17;
    if(pos==74) return 35;
    if(pos==97) return 27;
    return pos;
}

int ladders(int pos){
    if(pos==8) return 26;
    if(pos==19) return 38;
    if(pos==21) return 82;
    if(pos==28) return 53;
    if(pos==36) return 57;
    if(pos==43) return 77;
    if(pos==50) return 91;
    if(pos==54) return 88;
    if(pos==61) return 99;
    if(pos==62) return 96;
    if(pos==66) return 87;
    return pos;
}

void play_game(){
    int p1=0,p2=0;
    srand(time(NULL));

    while(p1<100 && p2<100){

        int d = roll_dice();
        if(p1 + d <= 100){
            p1 += d;
            p1 = ladders(snakes(p1));
        }

        d = roll_dice();
        if(p2 + d <= 100){
            p2 += d;
            p2 = ladders(snakes(p2));
        }

        printf("P1: %d | P2: %d\n", p1, p2);
        sleep(2);
    }

    if(p1==100) printf("Player wins\n");
    else printf("Computer wins\n");
}