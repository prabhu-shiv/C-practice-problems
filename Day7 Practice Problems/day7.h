#ifndef DAY7_H
#define DAY7_H

#include <stdio.h>

/* Reads and prints entire file content */
void display_file(const char *filename);

/* Copies content from source file to destination file */
void copy_file(const char *src, const char *dest);

/* Counts characters, spaces, tabs, and lines in a file */
void file_statistics(const char *filename);

/* Reads numbers from file and separates them into odd/even files */
void separate_odd_even(const char *input);

/* Structure for telephone directory */
struct Contact {
    char name[50];
    char address[100];
    char phone[15];
};

/* Text mode directory operations */
void add_contact_text(const char *filename);
void display_contacts_text(const char *filename);

/* Binary mode directory operations */
void add_contact_binary(const char *filename);
void display_contacts_binary(const char *filename);

#endif