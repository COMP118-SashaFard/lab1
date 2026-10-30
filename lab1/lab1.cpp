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

//drawShapes prototype
void drawShapes();

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
        cout << "7) Quit" << endl << endl;
        cout << "Please, enter your option: ";

        cin >> choice;

        cout << endl;

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
            cout << "Quit" << endl; // @todo idk why i need this if 0 quits the program
        }
        else {
            cout << "default" << endl;
        }

    } while (choice != 0);

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
// randomly generates a number of shapes and draws them with functions above
void drawShapes() {
    int shapeType = 1 + rand() % 6;
    int shapeLength = 5 + rand() % 20;
    char shapeCharacter = 33 + rand() % 126;
}
