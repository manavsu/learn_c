#include <stdio.h>
#include <stdbool.h>
#include "conditionals.h"


// Check if a is even. Return true if it is, false otherwise
bool is_even(int a) {
    return a % 2 == 0;
}

// Return the absolute value of a
int abs(int a) {
    return a < 0 ? -a : a;
}

// Return the maximum of a and b
int max(int a, int b) {
    return a > b ? a : b;
}

// Return the minimum of a, b and c
int min(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    } else if (b < a && b < c) {
        return b;
    } else {
        return c;
    } 
}

// Return the letter grade for the given score
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// 0-59: F
char calculate_letter_grade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}