#include "day7.h"
#include <stdlib.h>

/* 
   Reads file character-by-character and prints to stdout.
   Using fgetc ensures we preserve formatting (spaces, newlines).
*/
void display_file(const char *filename){
    FILE *fp = fopen(filename, "r");
    if(!fp){
        printf("Error opening file\n");
        return;
    }

    char ch;
    while((ch = fgetc(fp)) != EOF){
        putchar(ch);
    }

    fclose(fp);
}

/* 
   Copies file content byte-by-byte.
   Works for both text and non-text files.
*/
void copy_file(const char *src, const char *dest){
    FILE *f1 = fopen(src, "r");
    FILE *f2 = fopen(dest, "w");

    if(!f1 || !f2){
        printf("File error\n");
        return;
    }

    char ch;
    while((ch = fgetc(f1)) != EOF){
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
}

/*
   Counts:
   - total characters
   - spaces (' ')
   - tabs ('\t')
   - lines ('\n')

   Useful for basic text analytics and OS-level understanding.
*/
void file_statistics(const char *filename){
    FILE *fp = fopen(filename, "r");
    if(!fp){
        printf("Error opening file\n");
        return;
    }

    int chars=0, spaces=0, tabs=0, lines=0;
    char ch;

    while((ch=fgetc(fp))!=EOF){
        chars++;
        if(ch==' ') spaces++;
        if(ch=='\t') tabs++;
        if(ch=='\n') lines++;
    }

    printf("Chars:%d Spaces:%d Tabs:%d Lines:%d\n",
           chars, spaces, tabs, lines);

    fclose(fp);
}

/*
   Reads integers from input file.
   Writes odd numbers to odd.txt and even numbers to even.txt.
*/
void separate_odd_even(const char *input){
    FILE *in = fopen(input, "r");
    FILE *odd = fopen("odd.txt", "w");
    FILE *even = fopen("even.txt", "w");

    if(!in || !odd || !even){
        printf("File error\n");
        return;
    }

    int num;
    while(fscanf(in, "%d", &num) != EOF){
        if(num % 2 == 0)
            fprintf(even, "%d\n", num);
        else
            fprintf(odd, "%d\n", num);
    }

    fclose(in);
    fclose(odd);
    fclose(even);
}

/*
   Appends new contact in text mode.
   Data is human-readable but slower for large datasets.
*/
void add_contact_text(const char *filename){
    FILE *fp = fopen(filename, "a");
    struct Contact c;

    printf("Enter name: ");
    scanf("%s", c.name);

    printf("Enter address: ");
    scanf("%s", c.address);

    printf("Enter phone: ");
    scanf("%s", c.phone);

    fprintf(fp, "%s %s %s\n", c.name, c.address, c.phone);
    fclose(fp);
}

/*
   Displays all contacts stored in text file.
*/
void display_contacts_text(const char *filename){
    FILE *fp = fopen(filename, "r");
    struct Contact c;

    while(fscanf(fp, "%s %s %s", c.name, c.address, c.phone) != EOF){
        printf("%s %s %s\n", c.name, c.address, c.phone);
    }

    fclose(fp);
}

/*
   Stores contact in binary format.
   Faster and compact but not human-readable.
*/
void add_contact_binary(const char *filename){
    FILE *fp = fopen(filename, "ab");
    struct Contact c;

    printf("Enter name: ");
    scanf("%s", c.name);

    printf("Enter address: ");
    scanf("%s", c.address);

    printf("Enter phone: ");
    scanf("%s", c.phone);

    fwrite(&c, sizeof(c), 1, fp);
    fclose(fp);
}

/*
   Reads and displays contacts from binary file.
*/
void display_contacts_binary(const char *filename){
    FILE *fp = fopen(filename, "rb");
    struct Contact c;

    while(fread(&c, sizeof(c), 1, fp)){
        printf("%s %s %s\n", c.name, c.address, c.phone);
    }

    fclose(fp);
}