// T. Robert Ward
// May 29, 2013


//what shape is your pond?
//    circle - get diameter
//    Square / rectangle - get width & length
//  REPORT
//  Total surface area in sq yards
//  report if nothing applies
//  A = 2 - 4 sy
//  B = 4 - 8 sy
//  C = < 15 sy
//


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "***** SKIMMER PICKER *****\n" << endl;

    char answer;
    int pondDiameter, pondWidth, pondLength;
    double circleArea, squareArea;

    cout << "What is the shape of your pond? (Circular = \"C\") or Square / Rectangular \"S\" ";
    cin >> answer;

    if(answer == 'C')
    {
        cout << "What is the diameter of your pond ( in inches, please )? ";
        cin >> pondDiameter;
    }
    else
    {
        cout << "What is the width of your pond ( in inches, please )? ";
        cin >> pondWidth;
        cout << "What is the length of your pond ( in inches, please )? ";
        cin >> pondLength;
    }

    // Calc it

    if(answer == 'C')
    {
        circleArea = 3.14159 * pow((pondDiameter/2),2);
        circleArea = circleArea / 1296;
    }
    else
    {
        squareArea = pondLength * pondWidth;
        squareArea = squareArea / 1296;
    }

    if(answer == 'C')
    {
        if(circleArea >= 2.0 && circleArea < 4.0)
            cout << "\n\nYour circular pond has " << circleArea << "square yards.  \nThis requires our CLASS A SKIMMER.\n\n";
        else if(circleArea >= 4.0 && circleArea < 8.0)
            cout << "\n\nYour circular pond has " << circleArea << "square yards.  \nThis requires our CLASS B SKIMMER.\n\n";
        else if(circleArea >= 8.0 && circleArea < 15.0)
            cout << "\n\nYour circular pond has " << circleArea << "square yards.  \nThis requires our CLASS C SKIMMER.\n\n";
        else
            cout << "\n\n\n !!!!!!!!!!  Your pond's dimensions are not applicable to our products.  !!!!!!!!!!";
    }
    else
        {
            if(squareArea >= 2.0 && squareArea < 4.0)
            cout << "\n\nYour rectangular pond has " << squareArea << "square yards.  \nThis requires our CLASS A SKIMMER.\n\n";
            else if(squareArea >= 4.0 && squareArea < 8.0)
            cout << "\n\nYour rectangular pond has " << squareArea << "square yards.  \nThis requires our CLASS B SKIMMER.\n\n";
            else if(squareArea >= 8.0 && squareArea < 15.0)
            cout << "\n\nYour rectangular pond has " << squareArea << "square yards.  \nThis requires our CLASS C SKIMMER.\n\n";
            else
                cout << " !!!!!!!!!!  Your pond's dimensions are not applicable to our products.  !!!!!!!!!!";
        }



    return 0;
}
