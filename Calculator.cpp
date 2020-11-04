#include <iostream>
using namespace std;

int addition(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int subtraction(int a, int b){
    int difference;
    difference = a - b;
    return difference;
}

int multiplication(int a, int b){
    int product;
    product = a * b;
    return product;
}

int division(int a, int b){
    int quotient;
    quotient = a / b;
    return quotient;
}

int main() {
    int x, y, z, choice;
    char repeat;

    do{
        cout << "Enter First Number: ";
        cin >> x;
        cout << "Enter Second Number: ";
        cin >> y;
        cout << "\n-------------------\n [1] - Addition\n [2] - Subtraction\n [3] - Multiplication \n [4] - Division\n-------------------\n";
        cout <<"Enter choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                z = addition(x,y);
                cout << "\n" << x << "+" << y << "=" << z << "\n";
                break;
            case 2:
                z = subtraction(x,y);
                cout << "\n" << x << "-" << y << "=" << z << "\n";
                break;
            case 3:
                z = multiplication(x,y);
                cout << "\n" << x << "*" << y << "=" << z << "\n";
                break;
            case 4:
                z = division(x,y);
                cout << "\n" << x << "/" << y << "=" << z << "\n";
                break;
        }

        cout << "\nDo you want to repeat? (y/n): ";
        cin >> repeat;

        if(repeat == 'n'){
            return 0;
        }
        else
        cout << "\n";
    }while(repeat = 'y');
}
/*	٩(◕‿◕｡)۶ oh hello there, welcome to my code (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧

    This code is made by

    Roanne Zoe M. Cayanan

    please do not steal my code (´｡• ᵕ •｡`) ♡

    Thank you	♡ ～('▽^人)
*/

