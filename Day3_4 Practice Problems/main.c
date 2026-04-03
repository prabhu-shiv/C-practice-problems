#include "day3_4.h"
#include <assert.h>

int main(){

    /* Sorting */
    int a[]={5,2,9,1};
    sort_ascending(a,4);
    assert(a[0]==1 && a[3]==9);

    /* Swap */
    int x=10,y=20;
    swap(&x,&y);
    assert(x==20 && y==10);

    /* Max Min */
    int max,min;
    find_max_min(a,4,&max,&min);
    assert(max==9 && min==1);

    /* Remove duplicates */
    int d[]={1,2,2,3,1};
    int new_size=remove_duplicates(d,5);
    assert(new_size==3);

    /* Search */
    assert(linear_search(a,4,9)!=-1);
    assert(binary_search(a,4,9)!=-1);

    /* Sum product */
    int sp[]={4,5,2};
    assert(sum_of_products(sp,3)==30);

    /* String */
    char s[]="madam";
    assert(is_palindrome_str(s)==1);

    char str1[20]="hi";
    concat_strings(str1,"test");
    assert(str_length(str1)==6);

    /* Matrix */
    int mat[5][5], t[5][5];
    create_matrix(mat);
    transpose(mat,t);
    assert(mat[0][1]==t[1][0]);

    /* Recursion */
    assert(power(2,3)==8);
    assert(factorial(5)==120);

    /* Macro */
    assert(SQUARE(5)==25);

    return 0;
}