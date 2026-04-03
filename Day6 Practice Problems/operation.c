#include "day6.h"

/* ========= Q1 ========= */

int* create_array(int n){
    int *arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    return arr;
}

int linear_search(int *arr,int n,int key){
    for(int i=0;i<n;i++)
        if(arr[i]==key) return i;
    return -1;
}

void find_max_min(int *arr,int n,int *max,int *min){
    *max=*min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>*max) *max=arr[i];
        if(arr[i]<*min) *min=arr[i];
    }
}

int sum_array(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;
}

void sum_even_odd(int *arr,int n,int *even,int *odd){
    *even=*odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) *even+=arr[i];
        else *odd+=arr[i];
    }
}

int is_palindrome(int *arr,int n){
    for(int i=0;i<n/2;i++)
        if(arr[i]!=arr[n-i-1]) return 0;
    return 1;
}

void find_pair(int *arr,int n,int M){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]+arr[j]==M)
                printf("Pair: %d %d\n",arr[i],arr[j]);
}

void free_array(int *arr){
    free(arr);
}

/* ========= Q2 ========= */

struct Student* create_students(int n){
    struct Student *s=(struct Student*)malloc(n*sizeof(struct Student));
    for(int i=0;i<n;i++){
        printf("Roll: "); scanf("%d",&s[i].roll);
        printf("Name: "); scanf("%s",s[i].name);
        printf("Age: "); scanf("%d",&s[i].age);
        printf("Marks: "); scanf("%f",&s[i].marks);
    }
    return s;
}

void search_roll(struct Student *s,int n,int roll){
    for(int i=0;i<n;i++)
        if(s[i].roll==roll)
            printf("Found: %s\n",s[i].name);
}

void search_name(struct Student *s,int n,char name[]){
    for(int i=0;i<n;i++)
        if(strcmp(s[i].name,name)==0)
            printf("Found Roll: %d\n",s[i].roll);
}

struct Student highest_marks(struct Student *s,int n){
    int idx=0;
    for(int i=1;i<n;i++)
        if(s[i].marks>s[idx].marks) idx=i;
    return s[idx];
}

void name_starts_A(struct Student *s,int n){
    for(int i=0;i<n;i++)
        if(s[i].name[0]=='A')
            printf("%s\n",s[i].name);
}

void free_students(struct Student *s){
    free(s);
}

/* ========= Q3 ========= */

struct Point* create_points(int n){
    struct Point *p=(struct Point*)malloc(n*sizeof(struct Point));
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&p[i].x,&p[i].y,&p[i].weight);
    }
    return p;
}

struct Point max_weight(struct Point *p,int n){
    int idx=0;
    for(int i=1;i<n;i++)
        if(p[i].weight>p[idx].weight) idx=i;
    return p[idx];
}

void count_lines(struct Point *p,int n){
    int vertical=0,horizontal=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i].x==p[j].x) vertical++;
            if(p[i].y==p[j].y) horizontal++;
        }
    }

    printf("Vertical: %d Horizontal: %d\n",vertical,horizontal);
}