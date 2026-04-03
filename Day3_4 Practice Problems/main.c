#include "day3_4.h"
#include <assert.h>

int main(){

    /* Q1 */
    int arr[]={5,2,9,1};
    sort_ascending(arr,4);
    assert(arr[0]==1 && arr[3]==9);

    /* Q2 */
    int a=10,b=20;
    swap(&a,&b);
    assert(a==20 && b==10);

    /* Q3 */
    int max,min;
    find_max_min(arr,4,&max,&min);
    assert(max==9 && min==1);

    /* Q6 */
    assert(linear_search(arr,4,9)!=-1);

    /* Q7 */
    assert(binary_search(arr,4,9)!=-1);

    /* Q8 */
    int arr2[]={4,5,2};
    assert(sum_of_products(arr2,3)==(4*5+5*2));

    /* String */
    char s[]="madam";
    assert(is_palindrome_str(s)==1);

    /* Recursion */
    assert(power(2,3)==8);
    assert(factorial(5)==120);

    /* Macro */
    assert(SQUARE(5)==25);

    return 0;
}