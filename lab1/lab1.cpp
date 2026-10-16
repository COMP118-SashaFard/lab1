// lab1.cpp : 
// Author : Sasha Fard

#include <iostream>
using namespace std;

int main()
{
    int choice = 0;

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
            cout << "drawHorizontalLine" << endl;
        }
        else if (choice == 2) {
            cout << "drawVerticalLine" << endl;
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

