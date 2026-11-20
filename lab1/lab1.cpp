// lab1.cpp : 
// Author : Sasha Fard

#include <iostream>
#include<cstdlib>
#include<ctime>
#include<cassert>

using namespace std;

//fx protorypes
void drawHorizontalLine(int length, char ch);
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawSquareFilled(int size, char ch);
void drawRectangle(int height, int length, char ch);
void drawRectangleFilled(int height, int length, char ch);

// Global constants
const int MAX_SHAPES = 10;

// Randomly generates and draws a number of shapes
void drawShapes(int numShapes);
int readInt();
int readPositiveInt();

int main()
{
    // random initialization
    srand(time(NULL));

    int choice = 0, height = 0, length = 0, size = 0;
    char ch = '-';

    do {
        cout << "\n1) Draw a horizontal line" << endl;
        cout << "2) Draw a vertical line" << endl;
        cout << "3) Draw a square" << endl;
        cout << "4) Draw a square Filled" << endl;
        cout << "5) Draw a rectangle" << endl;
        cout << "6) Draw a rectangle Filled" << endl;
        cout << "7) Quit" << endl;
        cout << "8) Draw random shapes" << endl;
        cout << "Enter your Option: ";

        choice = readInt();

        cout << endl;

        if (choice >= 1 && choice <= 6) {
            if (choice == 1 || choice == 5 || choice == 6) {
                cout << "Enter length: ";
                length = readPositiveInt();
            }
            if (choice == 2 || choice == 5 || choice == 6) {
                cout << "Enter height: ";
                height = readPositiveInt();
            }
            if (choice == 3 || choice == 4) {
                cout << "Enter size: ";
                size = readPositiveInt();
            }
            cout << "Enter character: ";
            cin >> ch;
            cout << endl;
        }

        if (choice == 1) {
            drawHorizontalLine(length, ch);
        }
        else if (choice == 2) {
            drawVerticalLine(height, ch);
        }
        else if (choice == 3) {
            drawSquare(size, ch);
        }
        else if (choice == 4) {
            drawSquareFilled(size, ch);
        }
        else if (choice == 5) {
            drawRectangle(height, length, ch);
        }
        else if (choice == 6) {
            drawRectangleFilled(height, length, ch);
        }
        else if (choice == 7) {
            cout << "Goodbye!" << endl;
        }
        else if (choice == 8) {
            drawShapes(MAX_SHAPES);
        }
        else {
            cout << "Wrong choice, try again." << endl;
        }

    return 0;
}

// draws a horizontal line
void drawHorizontalLine(int length, char ch) {
    cout << "drawHorizontalLine" << endl;
}
// draws a vertical line
void drawVerticalLine(int height, char ch) {
    cout << "drawVerticalLine" << endl;
}
// draws a square
void drawSquare(int size, char ch) {
    cout << "drawSquare" << endl;
}
// draws a filled square
void drawSquareFilled(int size, char ch) {
    cout << "drawSquareFilled" << endl;
}
// draws a rectangle
void drawRectangle(int height, int length, char ch) {
    cout << "drawRectangle" << endl;
}
// draws a filled rectangle
void drawRectangleFilled(int height, int length, char ch) {
    cout << "drawRectangleFilled" << endl;
}
// randomly generates numShapes shapes and draws each one using the functions above
void drawShapes(int numShapes) {
    for (int i = 0; i < numShapes; i++) {
        int shapeType = 1 + rand() % 6;          // 1 - 6
        int shapeLength = 5 + rand() % 16;       // 5 - 20
        char shapeCharacter = 33 + rand() % 94;  // 33 - 126
        int shapeHeight = 5 + rand() % 16;       // used for rectangles

        if (shapeType == 1) {
            drawHorizontalLine(shapeLength, shapeCharacter);
        }
        else if (shapeType == 2) {
            drawVerticalLine(shapeLength, shapeCharacter);
        }
        else if (shapeType == 3) {
            drawSquare(shapeLength, shapeCharacter);
        }
        else if (shapeType == 4) {
            drawSquareFilled(shapeLength, shapeCharacter);
        }
        else if (shapeType == 5) {
            drawRectangle(shapeHeight, shapeLength, shapeCharacter);
        }
        else {
            drawRectangleFilled(shapeHeight, shapeLength, shapeCharacter);
        }
    }
}

// Reads an int from cin, asking again until a valid number is entered
int readInt() {
    int value;
    while (!(cin >> value)) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Not a number, try again: ";
    }
    return value;
}

// Reads a positive int from cin, asking again until the number is greater than 0
int readPositiveInt() {
    int value = readInt();
    while (value <= 0) {
        cout << "Must be greater than 0, try again: ";
        value = readInt();
    }
    return value;
}