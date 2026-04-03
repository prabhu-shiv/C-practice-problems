#include "day6.h"

int main() {

    int choice;

    while (1) {
        printf("\n===== DAY 6 MENU =====\n");
        printf("1. Dynamic Array Operations\n");
        printf("2. Student Database\n");
        printf("3. Points in XY Plane\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting...\n");
            break;
        }

        /* ================= Q1 ================= */
        if (choice == 1) {
            int n, key, M;
            printf("\nEnter size of array: ");
            scanf("%d", &n);

            int *arr = create_array(n);

            printf("\nArray created successfully.\n");

            printf("Enter element to search: ");
            scanf("%d", &key);
            int idx = linear_search(arr, n, key);

            if (idx != -1)
                printf("Element found at index %d\n", idx);
            else
                printf("Element not found\n");

            int max, min;
            find_max_min(arr, n, &max, &min);
            printf("Max: %d Min: %d\n", max, min);

            printf("Sum of array: %d\n", sum_array(arr, n));

            int even, odd;
            sum_even_odd(arr, n, &even, &odd);
            printf("Even sum: %d Odd sum: %d\n", even, odd);

            if (is_palindrome(arr, n))
                printf("Array is Palindrome\n");
            else
                printf("Array is NOT Palindrome\n");

            printf("Enter value M to find pair sum: ");
            scanf("%d", &M);
            find_pair(arr, n, M);

            free_array(arr);
        }

        /* ================= Q2 ================= */
        else if (choice == 2) {
            int n, roll;
            char name[50];

            printf("\nEnter number of students: ");
            scanf("%d", &n);

            struct Student *s = create_students(n);

            printf("\nEnter roll to search: ");
            scanf("%d", &roll);
            search_roll(s, n, roll);

            printf("Enter name to search: ");
            scanf("%s", name);
            search_name(s, n, name);

            struct Student top = highest_marks(s, n);
            printf("Top student: %s (%.2f marks)\n", top.name, top.marks);

            printf("\nStudents whose name starts with 'A':\n");
            name_starts_A(s, n);

            free_students(s);
        }

        /* ================= Q3 ================= */
        else if (choice == 3) {
            int n;

            printf("\nEnter number of points: ");
            scanf("%d", &n);

            printf("Enter x y weight for each point:\n");

            struct Point *p = create_points(n);

            struct Point max = max_weight(p, n);
            printf("Max weight point: (%d, %d) weight=%d\n",
                   max.x, max.y, max.weight);

            count_lines(p, n);

            free(p);
        }

        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}