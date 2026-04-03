#include "day3_4.h"

/* Q1 Sorting */
void sort_ascending(int arr[], int size){
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]>arr[j])
                swap(&arr[i],&arr[j]);
}

void sort_descending(int arr[], int size){
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[i]<arr[j])
                swap(&arr[i],&arr[j]);
}

/* Q2 */
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

/* Q3 */
void find_max_min(int arr[], int size, int *max, int *min){
    *max=*min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>*max) *max=arr[i];
        if(arr[i]<*min) *min=arr[i];
    }
}

/* Q4 */
int exists(int arr[], int size, int val){
    for(int i=0;i<size;i++)
        if(arr[i]==val) return 1;
    return 0;
}

void set_union(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size){
    int k=0;
    for(int i=0;i<sizeA;i++) result[k++]=A[i];
    for(int i=0;i<sizeB;i++)
        if(!exists(result,k,B[i]))
            result[k++]=B[i];
    *res_size=k;
}

void set_intersection(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size){
    int k=0;
    for(int i=0;i<sizeA;i++)
        if(exists(B,sizeB,A[i]))
            result[k++]=A[i];
    *res_size=k;
}

void set_difference(int A[], int sizeA, int B[], int sizeB, int result[], int *res_size){
    int k=0;
    for(int i=0;i<sizeA;i++)
        if(!exists(B,sizeB,A[i]))
            result[k++]=A[i];
    *res_size=k;
}

/* Q5 */
int remove_duplicates(int arr[], int size){
    int k=0;
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=0;j<k;j++)
            if(arr[i]==arr[j]) flag=1;
        if(!flag) arr[k++]=arr[i];
    }
    return k;
}

/* Q6 */
int linear_search(int arr[], int size, int key){
    for(int i=0;i<size;i++)
        if(arr[i]==key) return i;
    return -1;
}

/* Q7 */
int binary_search(int arr[], int size, int key){
    int l=0,r=size-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) l=mid+1;
        else r=mid-1;
    }
    return -1;
}

/* Q8 */
int sum_of_products(int arr[], int size){
    int sum=0;
    for(int i=0;i<size-1;i++)
        sum+=arr[i]*arr[i+1];
    return sum;
}

/* Strings */
int str_length(char str[]){
    int i=0;
    while(str[i]!='\0') i++;
    return i;
}

void to_uppercase(char str[]){
    for(int i=0;str[i];i++)
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
}

void reverse_string(char str[]){
    int len=str_length(str);
    for(int i=0;i<len/2;i++)
        swap((int*)&str[i],(int*)&str[len-i-1]);
}

int is_palindrome_str(char str[]){
    int len=str_length(str);
    for(int i=0;i<len/2;i++)
        if(str[i]!=str[len-i-1]) return 0;
    return 1;
}

void concat_strings(char dest[], char src[]){
    int i=str_length(dest),j=0;
    while(src[j]) dest[i++]=src[j++];
    dest[i]='\0';
}

/* Matrix */
void create_matrix(int mat[5][5]){
    int val=1;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            mat[i][j]=val++;
}

void display_matrix(int mat[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}

void transpose(int mat[5][5], int res[5][5]){
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            res[j][i]=mat[i][j];
}

void column_sum(int mat[][10], int r,int c,int res[]){
    for(int j=0;j<c;j++){
        res[j]=0;
        for(int i=0;i<r;i++)
            res[j]+=mat[i][j];
    }
}

int is_sparse(int mat[][10], int r,int c){
    int zero=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(mat[i][j]==0) zero++;
    return zero>(r*c)/2;
}

/* Recursion */
int power(int b,int e){
    if(e==0) return 1;
    return b*power(b,e-1);
}

int factorial(int n){
    if(n<=1) return 1;
    return n*factorial(n-1);
}

double series(double x,int n){
    double sum=0;
    for(int i=1;i<=n;i++){
        int p=2*i-1;
        sum+=power(x,p)/(double)factorial(p);
    }
    return sum;
}