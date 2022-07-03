//
//  main.c
//  Alg-Homework-1
//
//  Created by admin on 01.07.2022.
//

#include <stdio.h>
#include <curses.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void solution1();
void solution2();
void solution3();
void solution4();
void solution5();
void solution6();
void solution7();
void solution8();
void solution9();
void solution10();
void solution11();
void solution12();
void solution13();
void solution14();
void menu();

int main(int argc, const char * argv[]) {
    menu();
    return 0;
}

void menu() {
    int solutionNumber;
    printf("Choose solution (1..14):\n");
    scanf("%d", &solutionNumber);
    switch (solutionNumber) {
        case 1:
            solution1();
            break;
        case 2:
            solution2();
            break;
        case 3:
            solution3();
            break;
        case 4:
            solution4();
            break;
        case 5:
            solution5();
            break;
        case 6:
            solution6();
            break;
        case 7:
            solution7();
            break;
        case 8:
            solution8();
            break;
        case 9:
            solution9();
            break;
        case 10:
            solution10();
            break;
        case 11:
            solution11();
            break;
        case 12:
            solution12();
            break;
        case 13:
            solution13();
            break;
        case 14:
            solution14();
            break;
        default:
            printf("Wrong solution number!");
            break;
    }
}

void solution1() {
    printf("Solution 1:\n");
    
    float height = 0;
    float weight = 0;
    float result = 0;
    
    printf("Input your height: \n");
    scanf("%f", &height);
    printf("Input your weight: \n");
    scanf("%f", &weight);
    
    result = weight / (height / 100 * height / 100);
    printf("Your body index: %.2f\n", result);
}

void solution2() {
    printf("Solution 2:\n");
    
    int currentNum = 0;
    int maxNum = 0;
    
    printf("Input 4 numbers: \n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &currentNum);
        if (currentNum >= maxNum) {
            maxNum = currentNum;
        }
    }
    printf("Maximum number: %d\n", maxNum);
}

void solution3() {
    printf("Solution 3:\n");
    
    int method = 0;
    int firstNum = 0;
    int secondNum = 0;
    
    printf("Choose change method (1..5): ");
    scanf("%d", &method);
    printf("Input first number: ");
    scanf("%d", &firstNum);
    printf("Input second number: ");
    scanf("%d", &secondNum);
    switch (method) {
        case 1:
        {
            int tempNumber = firstNum;
            firstNum = secondNum;
            secondNum = tempNumber;
            break;
        }
        case 2:
        {
            firstNum += secondNum;
            secondNum = firstNum-secondNum;
            firstNum -= secondNum;
            break;
        }
        case 3:
            firstNum *= secondNum;
            secondNum = firstNum/secondNum;
            firstNum /= secondNum;
            break;
//        case 4:
//            break;
//        case 5:
//            break;
        default:
            break;
    }
    printf("First number - %d\n", firstNum);
    printf("Second number - %d\n", secondNum);
    
}

void solution4() {
    float a, b, c = 0;
    printf("Input coefficiets of the quadratic equation (Ax^2+Bx+C=0):\n");
    printf("Input A:\n");
    scanf("%f", &a);
    printf("Input B:\n");
    scanf("%f", &b);
    printf("Input C:\n");
    scanf("%f", &c);
    
    float d = 0;
    
    d = b*b - 4*a*c;
    if (d < 0) {
        printf("No roots!\n");
    } else if (d == 0) {
        float x = -b/2/a;
        printf("X = %.2f\n", x);
    } else {
        float x1 = (-b - sqrt(d)) / 2 / a;
        float x2 = (-b + sqrt(d)) / 2 / a;
        printf("X1 = %.2f, X2 = %.2f\n", x1, x2);
    }
}

void solution5() {
    printf("Solution 5: \n");
    
    int monthNumber = 0;
    printf("Input number of month: \n");
    scanf("%d", &monthNumber);
           
    switch (monthNumber) {
        case 1:
            printf("Winter!\n");
            break;
        case 2:
            printf("Winter!\n");
            break;
        case 3:
            printf("Spring!\n");
            break;
        case 4:
            printf("Spring!\n");
            break;
        case 5:
            printf("Spring!\n");
            break;
        case 6:
            printf("Summer!\n");
            break;
        case 7:
            printf("Summer!\n");
            break;
        case 8:
            printf("Summer!\n");
            break;
        case 9:
            printf("Autumn!\n");
            break;
        case 10:
            printf("Autumn!\n");
            break;
        case 11:
            printf("Autumn!\n");
            break;
        case 12:
            printf("Winter!\n");
            break;
        default:
            printf("I dont know this month\n");
            break;
    }
}

void solution6() {
    printf("Solution 6:\n");
    
    int age = 0;
    printf("Введите возраст человека:\n");
    scanf("%d", &age);
    int lastDigit = age % 10;
    int digitToCheck = age / 10 % 10;
    if (digitToCheck == 1) {
        printf("%d лет\n", age);
    } else if (lastDigit >= 2 && lastDigit <= 4) {
        printf("%d года\n", age);
    } else if (lastDigit == 1) {
        printf("%d год\n", age);
    } else {
        printf("%d лет\n", age);
    }
}

void solution7() {
    printf("Solution 7:\n");
    
    int x1, y1, x2, y2 = 0;
    printf("Input coordinates of 2 chess areas (x1, y1, x2, y2):\n");
    printf("Input x1:\n");
    scanf("%d", &x1);
    printf("Input x2:\n");
    scanf("%d", &x2);
    printf("Input y1:\n");
    scanf("%d", &y1);
    printf("Input y2:\n");
    scanf("%d", &y2);
    
    int sum = x1 + y1 + x2 + y2;
    int res = sum % 2;
    
    if (res == 0) {
        printf("Same color\n");
    } else {
        printf("Different color\n");
    }
}

void solution8() {
    printf("Solution 8:\n");
    
    int a, b = 0;
    printf("Input a:\n");
    scanf("%d", &a);
    printf("Input b:\n");
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++) {
        int square = i * i;
        int cube = i * i * i;
        printf("Current number - %d, square - %d, cube - %d\n", i, square, cube);
    }
}

void solution9() {
    printf("Solution 9:\n");
    
    int n, k = 0;
    printf("Input N:\n");
    scanf("%d", &n);
    printf("Input K:\n");
    scanf("%d", &k);
    
    int i = 0;
    while (n - k >= 0) {
        i++;
        n = n - k;
    }
    
    printf("Division result = %d\n", i);
    printf("Remainder = %d\n", n);
}

void solution10() {
    printf("Solution 10:\n");
    
    int n = 0;
    printf("Input N (>0):\n");
    scanf("%d", &n);
    
    int rem = 0;
    int someBool = 0;
    while (n >= 10) {
        rem = n % 10;
        if (rem % 2 == 1) {
            someBool = 1;
            break;
        }
        n /= 10;
    }
    if (someBool == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}

void solution11() {
    printf("Solution 11:\n");
    
    int n = 0;
    float sum = 0, result = 0;
    while (1) {
        int digit = 0;
        printf("Input number:\n");
        scanf("%d", &digit);
        if (digit == 0) {
            break;
        } else {
            if ((digit % 10 == 8) && (digit > 0) && (digit % 2 == 0)) {
                sum += digit;
                n++;
            }
        }
    }
    result = sum / n;
    printf("Result = %.2f\n", result);
}

int solution12func(int x1, int x2, int x3) {
    if ((x1 >= x2) && (x1 >= x3)) {
        return x1;
    } else if (x2 > x3) {
        return x2;
    } else {
        return x3;
    }
}

void solution12() {
    printf("Solution 12:\n");
    
    int x1, x2, x3;
    int result;
    printf("Input 3 numbers:\n");
    scanf("%d", &x1);
    scanf("%d", &x2);
    scanf("%d", &x3);
    
    result = solution12func(x1, x2, x3);
    printf("Result = %d\n", result);
}

int solution13funcA() {
    srand(time(NULL));
    return rand() % 100 + 1;
}

int solution13funcB() {
    int x = 1, a = 2, b = 3, m = 100;
    
    int i;
    int modulus = time(NULL) % 100;
    for (i = 0; i < modulus; i++) {
        x = (a * x + b) % m;
    }
    
    return x;
}

void solution13() {
    printf("Solution 13:\n");
    
    int method = 0;
    int result;
    
    printf("Choose change method (1 or 2): ");
    scanf("%d", &method);
    
    switch (method) {
        case 1:
        {
            result = solution13funcA();
            break;
        }
        case 2:
        {
            result = solution13funcB();
            break;
        }
        default:
            break;
    }

    printf("Random number: %d\n", result);
}

void solution14() {
    printf("Solution14:\n");
    
    int n;
    printf("Input N:\n");
    scanf("%d", &n);

    for (int ind = 0; ind < n; ind++) {
        
        int divider = 1;
        int numberToCheck = ind;
        while (numberToCheck > 0) {
            numberToCheck = numberToCheck / 10;
            divider *= 10;
        }
        
        int square = ind * ind;
        if (square % divider == ind) {
            printf("%d\n", ind);
        }
    }
}


