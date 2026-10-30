// lab1.cpp : 
// Author : Sasha Fard

#include <iostream>
using namespace std;

//fx protorypes
void drawHorizontalLine(int length, char ch);
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawSquareFilled(int size, char ch);
void drawRectangle(int height, int length, char ch);
void drawRectangleFilled(int height, int length, char ch);

int main()
{
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
            cout << "drawSquare" << endl;
        }
        else if (choice == 4) {
            cout << "drawSquareFillerd" << endl;
        }
        else if (choice == 5) {
            cout << "drawRectangle" << endl;
        }
        else if (choice == 6) {
            cout << "drawRectangleFilled" << endl;
        }
        else if (choice == 7) {
            cout << "Quit" << endl;
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