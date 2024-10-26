/*
Name: Exercise5_Welton
Author: Christopher Welton
Description: This program computes straight line distance of x and y-coordinates
*/

#include<iostream>
#include<cmath>
#include "Point.h"


using namespace std;

Point midpoint(Point p1, Point p2){
    Point mid((p1.getX() + p2.getX()) / 2, (p1.getY() + p2.getY()) / 2);
    return mid;
}

double distance(Point p1, Point p2) {
    return sqrt(pow((p2.getX() - p1.getX()), 2) + pow((p2.getY() - p1.getY()), 2));
}

int main() {

    double x1, y1, x2, y2;

    cout << "Lets calculate the straight line distance of two points!" << endl;
    cout << "Please ender the x and y coordiantes for the first point: " ;
    cin >> x1 >> y1;

    cout << "Please ender the x and y coordiantes for the second point: " ;
    cin >> x2 >> y2;

    Point p1 = Point(x1, y1);
    Point p2 = Point(x2, y2);

    Point midPoint = midpoint(p1, p2);
    cout << "The midpoint of (" << p1.getX() << ", " << p1.getY() << ")"
        << " and (" << p2.getX() << ", " << p2.getY() << ") is "
        << "(" << midPoint.getX() << ", " << midPoint.getY() << ")" << endl;
    printf("Distance: %.3lf \n" , distance(p1, p2));

    return 0;
}