#include <stdio.h>
#include <stdlib.h>

// Sums the first [n] elements from array [L].
int sum(int L[], int n) {
    int i, sum = 0;
    for(i=0; i<n; i++)
        sum += L[i];
    return sum;
}

// Adds [v] to each of the first [n] elements of [L].
void addTo(int L[], int n, int v) {
    int i;
    for (i=0; i<n; i++)
        L[i] += v;
}

// Places the highest and lowest value in the first [n] elements
// into pointers [h] and [l] from array [L].
void highlow(int L[], int n, int *h, int *l) {
    int i;
    *h = L[0];
    *l = L[0];
    for(i=0; i<n; i++){
        if(L[i] > *h){ *h = L[i]; }
        else if(L[i] < *l){ *l = L[i]; }
    }
}

// How many times [v] occurs in the first [n] elements of array [L].
int freq(int L[], int n, int v){
    int i, freq=0;
    for(i=0; i<n; i++)
    {
        if(v == L[i])
            freq++;
    }
    return freq;
}

// Prints the first [n] elements from array [L].
void printList(int L[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%3d ", L[i]);
    printf("\n");
}

// Main. Executes Program.
int main() {
    int i;
    int A[20], B[100];

    for(i=0; i<20; i++)
        A[i] = i;
    for(i=0; i<100; i++)
        B[i] = rand()%500;

    // printList()
    {
        printf("Print first 5 elements:\n");
        printf("A: ");
        printList(A, 5);
        printf("B: ");
        printList(B, 5);
        printf("\n");
    }
    // sum()
    {
        printf("Print the sum of the first 5:\n");
        printf("A: %d\n", sum(A, 5));
        printf("B: %d\n", sum(B, 5));
        printf("\n");
    }
    // addTo()
    {
        printf("Print the list before and after adding 3.\n");
        printf("Before:\n");
        printList(A, 5);
        printList(B, 5);
        printf("After:\n");
        addTo(A, 3, 4);
        printList(A, 5);
        addTo(B, 3, 4);
        printList(B, 5);
        printf("\n");

    }
    // highlow()
    {
        printf("Finds the High and Low of the first X elements.\n");
        int h, l;
        highlow(A, 5, &h, &l);
        printf("A: High - %d; Low - %d\n", h, l);
        highlow(B, 5, &h, &l);
        printf("B: High - %d; Low - %d\n", h, l);
        printf("\n");
    }
    // freq()
    {
        printf("Frequency of 4 in A: %d\n", freq(A, 5, 4));
        printf("\n");
    }
    return 0;
}
