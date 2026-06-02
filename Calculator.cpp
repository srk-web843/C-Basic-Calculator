#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
  cout << "Choose subject of calculation: (arithmetic 1, geometry 2, algebra 3)\n";
  cout << "------------------------------------------------------------\n";
  int subject;
  cin >> subject;
    if (subject == 1) {
        cout << "Choose operation: (+ 1, - 2, * 3, / 4)\n";
        cout << "------------------------------------------------------------\n";
        int operation;
        cin >> operation;
          if (operation == 1) {
            cout << "Enter two values: \n";
            cout << "------------------------------------------------------------\n";
            double x;
            double y;
            cin >> x >> y;
            cout << "Adding together values: \n";
            cout << "------------------------------------------------------------\n";
            cout << x << " + " <<  y << endl;
            cout << "Sum of " << x << " and " << y << " is: " << x + y << endl;
            return 0;
          }
          if (operation == 2) {
            cout << "Enter two values: (first - second)\n";
            cout << "------------------------------------------------------------\n";
            double x;
            double y;
            cin >> x >> y;
            cout << "Taking away from " << x << ": \n";
            cout << "------------------------------------------------------------\n";
            cout << x << " - " <<  y << endl;
            cout << "Difference of " << y << " from " << x << " is: " << x - y << endl;
            return 0;
          }
          if (operation == 3) {
            cout << "Enter two values: \n";
            cout << "------------------------------------------------------------\n";
            double x;
            double y;
            cin >> x >> y;
            cout << "Multiplying values: \n";
            cout << "------------------------------------------------------------\n";
            cout << x << " * " <<  y << endl;
            cout << "Product of " << x << " times " << y << " is: " << x * y << endl;
            return 0;
          }
          if (operation == 4) {
            cout << "Enter two values: (first / second)\n";
            cout << "------------------------------------------------------------\n";
            double x;
            double y;
            cin >> x >> y;
            cout << "Dividing " << x << " by " << y << ": \n";
            cout << "------------------------------------------------------------\n";
            cout << x << " / " <<  y << endl;
            cout << "Quotient of " << x << " over " << y << " is: " << x / y << endl;
            return 0;
          } else {
            cout << "Invalid operation.\n";
            return 0;
          }
    } 
    if (subject == 2) {
        cout << "Choose dimension: (2D, 3D)\n";
        cout << "------------------------------------------------------------\n";
        string answer;
        cin >> answer;
          if (answer == "2D" || answer == "2d") {
            cout << "Choose formula: (area 1, perimeter 2)\n";
            cout << "Choose shape: (triangle 1, circle 2, rectangle 3)\n";
            cout << "------------------------------------------------------------\n";
            int formula;
            int shape;
            cin >> formula >> shape;
              if (formula == 1 && shape == 1) {
                cout << "Enter base and height of triangle: \n";
                cout << "------------------------------------------------------------\n";
                double base;
                double height;
                cin >> base >> height;
                cout << "Finding area of triangle: \n";
                cout << "------------------------------------------------------------\n";
                cout << "(" << base << " * " <<  height << ")" << " / 2\n";
                cout << base * height << " / 2\n";
                cout << "Area of triangle with a base of " << base << " and a height of " << height << " is: " << (base * height) / 2 << endl;
                return 0;
              }
              if (formula == 2 && shape == 1) {
                cout << "Enter three sides of triangle: \n";
                cout << "------------------------------------------------------------\n";
                double side1;
                double side2;
                double side3;
                cin >> side1 >> side2 >> side3;
                cout << "Finding perimeter of triangle: \n";
                cout << "------------------------------------------------------------\n";
                cout << side1 << " + " << side2 << " + " << side3 << endl;
                cout << "Perimeter of triangle with is: " << side1 + side2 + side3 << endl;
                return 0;
              }
              if (formula == 1 && shape == 2) {
                cout << "Enter radius of circle: \n";
                cout << "------------------------------------------------------------\n";
                double rad;
                cin >> rad;
                double pi = 3.14159265358979323846;
                cout << "Finding area of circle: \n";
                cout << "------------------------------------------------------------\n";
                cout << "3.14 * " << rad << "^2\n";
                cout << "Area of a circle with a radius of " << rad << " is: " << (pi * (pow(rad, 2)));
                return 0;
              }
              if (formula == 2 && shape == 2) {
                cout << "Enter radius of circle: \n";
                cout << "------------------------------------------------------------\n";
                double rad;
                cin >> rad;
                double pi = 3.14159265358979323846;
                cout << "Finding circumference of circle: \n";
                cout << "------------------------------------------------------------\n";
                cout << "3.14 * " << "(" << rad << " * 2)\n";
                cout << "3.14 * " << rad * 2 << endl;
                cout << "Circumference of a circle with a radius of " << rad << " is: " << (2 * rad) * pi;
                return 0;
              }
              if (formula == 1 && shape == 3) {
                cout << "Enter length and width of rectangle: \n";
                cout << "------------------------------------------------------------\n";
                double length;
                double width;
                cin >> length >> width;
                cout << "Finding area of rectangle: \n";
                cout << "------------------------------------------------------------\n";
                cout << length << " * " << width << endl;
                cout << "Area of rectangle with side lengths of " << length << " and " << width << " is: " << length * width;
                return 0;
              }
              if (formula == 2 && shape == 3) {
                cout << "Enter length and width of rectangle: \n";
                cout << "------------------------------------------------------------\n";
                double length;
                double width;
                cin >> length >> width;
                cout << "Finding perimeter of rectangle: \n";
                cout << "------------------------------------------------------------\n";
                cout << "(" << length << " * 2) + " << "(" << width << " * 2)\n";
                cout << "(" << length * 2 << ") + " << "(" << width * 2 << ")\n"; 
                cout << length * 2 << " + " << width * 2 << endl;
                cout << "Perimeter of rectangle with side lengths of " << length << " and " << width << " is: " << (2 * length) + (2 * width);
                return 0;
              }
          } 
          if (answer == "3D" || answer == "3d") {
            cout << "Choose formula: (volume 1, surface area 2)\n";
            cout << "Choose shape: (pyramid 1, sphere 2, rectangular prism 3)\n";
            cout << "------------------------------------------------------------\n";
            int formula;
            int shape;
            cin >> formula >> shape;
              if (formula == 1 && shape == 1) {
                cout << "Enter length, width, and height of pyramid: \n";
                cout << "------------------------------------------------------------\n";
                double length;
                double width;
                double height;
                cin >> length >> width >> height;
                cout << "Finding volume of pyramid: \n";
                cout << "------------------------------------------------------------\n";
                cout << "(" << length << " * " << width << " * " << height << ")" << " / 3\n";
                cout << length * width * height << " / 3\n";
                cout << "Volume of a pyramid with a length of " << length << ", a width of " << width << ", and a height of " << height << " is: " << (length * width * height) / 3 << endl;
                return 0;
              }
              if (formula == 2 && shape == 1) {
                cout << "Enter length, width, and height of pyramid: \n";
                cout << "------------------------------------------------------------\n";
                double length;
                double width;
                double height;
                cin >> length >> width >> height;\
                cout << "Finding surface area of pyramid: \n";
                cout << "------------------------------------------------------------\n";
                cout << "(" << length << " * " << width << ") + " << length << " * radical(" << width << " / 2)^2 + " << height << "^2 + " << width << ") + " << width << " * radical(" << length << " / 2)^2 + " << height << "^2\n";
                cout << length * width << " + " << length << " * radical(" << pow((width / 2), 2) << " + " << pow(height, 2) << " + " << width << ") + " << width << " * radical(" << pow((length / 2), 2) << " + " << pow(height, 2) << ")\n";
                cout << "Surface area of a pyramid with a length of " << length << ", a width of " << width << ", and a height of " << height << " is: " << ((length * width) + (length * sqrt(pow((width / 2), 2) + pow(height, 2))) + (width * sqrt(pow((length / 2), 2) + pow(height, 2))));
                return 0;
              }
              if (formula == 1 && shape == 2) {
                cout << "Enter radius of sphere: \n";
                cout << "------------------------------------------------------------\n";
                double rad;
                cin >> rad;
                double pi = 3.14159265358979323846;
                cout << "Finding volume of sphere: \n";
                cout << "------------------------------------------------------------\n";
                cout << "(4 / 3) * 3.14 * " << rad << "^3\n";
                cout << "Volume of a sphere with a radius of " << rad << " is: " << ((1.33333333333333) * pi * pow(rad, 3));
                return 0;
              }
              if (formula == 2 && shape == 2) {
                cout << "Enter radius of sphere: \n";
                cout << "------------------------------------------------------------\n";
                double rad;
                cin >> rad;
                double pi = 3.14159265358979323846;
                cout << "Finding surface area of sphere: \n";
                cout << "------------------------------------------------------------\n";
                cout << "(4 * 3.14) * " << rad << "^2\n";
                cout << "Surface area of a sphere with a radius of " << rad << " is: " << (4 * pi * pow(rad, 2));
                return 0;
              }
              if (formula == 1 && shape == 3) {
                cout << "Enter length, width, and height of rectangular prism: \n";
                cout << "------------------------------------------------------------\n";
                double length;
                double width;
                double height;
                cin >> length >> width >> height;
                cout << "Finding volume of rectangular prism: \n";
                cout << "------------------------------------------------------------\n";
                cout << length << " * " << width << " * " << height << endl;
                cout << "Volume of a rectangular prism with a length of " << length << ", a width of " << width << ", and a height of " << height << " is: " << length * width * height;
                return 0;
              }
              if (formula == 2 && shape == 3) {
                cout << "Enter length, width, and height of rectangular prism: \n";
                cout << "------------------------------------------------------------\n";
                double length;
                double width;
                double height;
                cin >> length >> width >> height;
                cout << "Finding surface area of rectangular prism: \n";
                cout << "------------------------------------------------------------\n";
                cout << "(2 * ( " << length << " * " << width << " )) + ( " << length << " * " << height << " ) + ( " << width << " * " << height << endl;
                cout << "(2 * ( " << length * width << " )) + ( " << length << " * " << height << " ) + ( " << width << " * " << height << endl;
                cout << "Surface area of a rectangular prism with a length of " << length << ", a width of " << width << ", and a height of " << height << " is: " << (2 * ((length * width) + (length * height) + (width * height)));
                return 0;
              }
          }
    }
    if (subject == 3) {
        cout << "Choose subject of calculation: (quadratics 1)\n";
        cout << "------------------------------------------------------------\n";
        int subject;
        cin >> subject;
          if (subject == 1) {
            cout << "Choose quadratic method: (complete the square 1, quadratic formula 2)\n";
            cout << "------------------------------------------------------------\n";
            int method;
            cin >> method;
              if (method == 1) {
                cout << "Enter a, b, and c values of quadratic: \n";
                cout << "------------------------------------------------------------\n";
                double a;
                double b;
                double c;
                cin >> a >> b >> c;
                cout << "------------------------------------------------------------\n";
                cout << "Starting to complete the square: \n";
                cout << a << "x^2" << " + " << b << "x" << " + " << c << " = 0\n";
                cout << a << "x^2" << " + " << b << "x" << " + " << pow((b / 2), 2) << " = " << -c << endl;
                cout << a << "x^2" << " + " << b << "x" << " = " << -c + pow((b / 2), 2) << endl;
                cout << "(" << a << "x" << " + " << (b / 2) << ")^2" << " = " << -c + pow((b / 2), 2) << endl;
                cout << a << "x" << " + " << (b / 2) << " = " << "+- " << sqrt(pow((b / 2), 2) - c) << endl;
                cout << a << "x" << " = " << -(b / 2) << " +- " << sqrt(pow((b / 2), 2) - c) << endl;
                cout << "The zeros of this quadratic are " << -(b / 2) << " +- " << sqrt(pow((b / 2), 2) - c) << endl;
                return 0;
              }
              if (method == 2) {
                cout << "Enter a, b, and c values of quadratic: \n";
                cout << "------------------------------------------------------------\n";
                double a;
                double b;
                double c;
                cin >> a >> b >> c;
                cout << "------------------------------------------------------------\n";
                cout << "Solving through the quadratic formula: \n";
                cout << "(" << -b << " +- " << " radical(" << b << "^2 - 4(" << a << " * " << c << ")) / 2(" << a << ")\n"; 
                cout << "(" << -b << " +- " << " radical(" << pow(b, 2) << " - 4(" << a * c << ")) / 2(" << a << ")\n"; 
                cout << "(" << -b << " +- " << " radical(" << pow(b, 2) << " - " << 4 * a * c << ") / " << 2 * a << endl; 
                cout << "(" << -b << " +- " << " radical(" << pow(b, 2) - (4 * a * c) << ") / " << 2 * a << ")" << endl; 
                cout << "The zeroes of this quadratic are " << ((-b + sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a)) << " and " << ((-b - sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a)) << endl; 
                return 0;
              }
          }
    }
}