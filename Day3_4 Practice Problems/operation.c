#include "day3_4.h"

/* Swap */
void swap(int *a,int *b){
    int t=*a; *a=*b; *b=t;
}

/* Sorting */
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

/* Max Min */
void find_max_min(int arr[], int size, int *max, int *min){
    *max=*min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>*max) *max=arr[i];
        if(arr[i]<*min) *min=arr[i];
    }
}

/* Helper */
int exists(int arr[], int size, int val){
    for(int i=0;i<size;i++)
        if(arr[i]==val) return 1;
    return 0;
}

/* Set */
void set_union(int A[], int n, int B[], int m, int R[], int *k){
    *k=0;
    for(int i=0;i<n;i++)
        if(!exists(R,*k,A[i])) R[(*k)++]=A[i];
    for(int i=0;i<m;i++)
        if(!exists(R,*k,B[i])) R[(*k)++]=B[i];
}

void set_intersection(int A[], int n, int B[], int m, int R[], int *k){
    *k=0;
    for(int i=0;i<n;i++)
        if(exists(B,m,A[i]) && !exists(R,*k,A[i]))
            R[(*k)++]=A[i];
}

void set_difference(int A[], int n, int B[], int m, int R[], int *k){
    *k=0;
    for(int i=0;i<n;i++)
        if(!exists(B,m,A[i]))
            R[(*k)++]=A[i];
}

/* Remove duplicates */
int remove_duplicates(int arr[], int size){
    int k=0;
    for(int i=0;i<size;i++)
        if(!exists(arr,k,arr[i]))
            arr[k++]=arr[i];
    return k;
}

/* Search */
int linear_search(int arr[], int size, int key){
    for(int i=0;i<size;i++)
        if(arr[i]==key) return i;
    return -1;
}

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

/* Sum of products */
int sum_of_products(int arr[], int size){
    int sum=0;
    for(int i=0;i<size-1;i++)
        sum+=arr[i]*arr[i+1];
    return sum;
}

/* Strings */
int str_length(char s[]){
    int i=0; while(s[i]) i++; return i;
}

void to_uppercase(char s[]){
    for(int i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z')
            s[i]-=32;
}

void reverse_string(char s[]){
    int n=str_length(s);
    for(int i=0;i<n/2;i++){
        char t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
}

int is_palindrome_str(char s[]){
    int n=str_length(s);
    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-i-1]) return 0;
    return 1;
}

void concat_strings(char d[], char s[]){
    int i=str_length(d), j=0;
    while(s[j]) d[i++]=s[j++];
    d[i]='\0';
}

/* Date */
void print_date(int d,int m,int y){
    char *months[]={"","January","February","March","April","May","June","July","August","September","October","November","December"};

    char *suffix="th";
    if(d==1||d==21||d==31) suffix="st";
    else if(d==2||d==22) suffix="nd";
    else if(d==3||d==23) suffix="rd";

    printf("%d%s %s, %d\n",d,suffix,months[m],y);
}

/* Matrix */
void create_matrix(int mat[5][5]){
    int v=1;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            mat[i][j]=v++;
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
    int z=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(mat[i][j]==0) z++;
    return z>(r*c)/2;
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