//
//  funky.c
//  Systems
//
//  Created by Theodore Fahey on 10/4/21.
//

#include <stdio.h>
int f1(int a[], int size){
    int i;
    printf("Question 1: \n[ ");
    for (i = 0; i < size; i++){
        printf("%d ", *a);
        a++;
    }
    printf("]");
    return 0;
}
double f2(int a[], int size){
    int i;
    
    int sum = 0;
    for (i = 0; i < size; i++){
        sum += *a;
        a++;
    }
    float avg = ((float)sum/size);
    return (avg);
}
int f3(int a[], int b[], int size){
    int i;
    for (i = 0; i < size; i++){
        *b = *a;
        a++;
        b++;
    }
    return 0;
}
int main(){
    int arr[] = {2,5,7,8,4,12,56,97};
    int arrb[8];
    int size = 8;
    f1(arr, size);
    printf("\nQuestion 2: \n%f\n", f2(arr,size));
    int i;
    printf("Question 3: \n[");
    f3(arr,arrb,size);
    for (i =0; i < size; i++){
        printf("%d ", arrb[i]);
    }
    printf("]\n");
    return 0;
    
}
