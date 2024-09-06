//********************************************************
// fracturing.c
// Author: Hector Gonzalez UCFID:5688309
// Date: 9/1/24
// Class: COP 3223, Professor Parra
// Purpose: This program collects user input 
// and effects calculations with the values. The 
// purpose is to be able to fracture our code 
// in multiple functions.
// Input: 5 pairs of points coordinates 
//
// Output: The coordinates of the points entered 
// and the result from the calculation
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//********************************************************
// Purpose: Collects a double value from the user with scanf
// Output:  None
// Precondition:    None
// Postcondition:   None.
//********************************************************
double askForUserInput(){
    double coordinate;
    scanf("%lf",&coordinate);
    return coordinate;
}

//********************************************************
// Purpose: Calculates the distance from two points
// Output: The coordinates of the two points and its distance
// Precondition: None
// Postcondition: None
//********************************************************
double calculateDistance(){
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();

    double distance =  sqrt(pow(x1-x2,2) + pow(y1 - y2,2));

    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n",x1,y1);
    printf("Point #1 entered: x1 = %.3f; y2 = %.3f\n",x2,y2);
    printf("The distance between the two points is %.3f\n",distance);
    
    return distance;
}

//********************************************************
// Purpose: Calculates area of a circle knowing its diameter
// Output: Outputs the area and the output from calculateDistance
// Precondition: None.
// Postcondition:   None.
//********************************************************
double calculateArea(){
    double distance = calculateDistance();
    double area = PI*distance*distance / 4; // area of a circle assuming P1 is center and P2 a point on the circumference

    printf("The area of the city encompassed by your request is %.3f\n",area);
    return 1.0;
}

//********************************************************
// Purpose: Calculate the perimeter of a square
// Output: Prints the perimeter of a circle knowing its radius
// Precondition:  None.
// Postcondition:   None.
//********************************************************
double calculatePerimeter(){
    double distance = calculateDistance();
    double perimeter = distance*PI;
    printf("The perimeter of the city encompassed by your request is %.3f\n",perimeter);
    return 1.0;
}

//********************************************************
// Purpose: Calculate the height
// Output: Prints the height and the output from calculateDistance
// Precondition:  None.
// Postcondition:   None.
//********************************************************
double calculateHeight(){
    double distance = calculateDistance();
    double height = distance;
    printf("The height of the city encompassed by your request is %.3f\n",height);
    return 1.0;
}

//********************************************************
// Purpose: Calculate the width of a line
// Output: Prints the width and the output from calculateDistance
// Precondition:  None.
// Postcondition:   None.
//********************************************************

double calculateWidth(){
    double distance = calculateDistance();
    double width = distance;
    printf("The width of the city encompassed by your request is %.3f\n",width);
    return 1.0;
}

int main(){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateHeight();
    calculateWidth();

    return 0;
}

