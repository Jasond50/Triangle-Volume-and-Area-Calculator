#include <iostream>

double width;
double height;
double area;
double length;

double triangle(double width, double height)
{
    return (width * height) / 2;
}
double triangularprism(double width, double length, double height)
{
    return ((width * length) * height) / 2;
}

int main()
{
    /*double width;
    double length;
    double height;*/
    char decision2;
    int decision;
    double area = triangle(width, height);
    double volume = triangularprism(width, length, height);
    
    std::cout << "****** Triangle and Triangular Prism, Area and Volume Calculator ******\n";
    std::cout << "You can always enter a value as 0 to return to the previous messurement.\n\n";

    line:
    std::cout << "Would you like to find the area of triangle(1) or the volume of triangular prism(2)?: ";
    std::cin >> decision;

    if(decision == 1)
    {
        widthA:
        std::cout << "Enter width of triangle: ";
        std::cin >> width;

        heightA:
        std::cout << "Enter height of triangle: ";
        std::cin >> height;
        
        if(height <= 0)
        {
            goto widthA;
        }
        
        double area = triangle(width, height);
        
        std::cout << "Area: " << area << "cm^2\n\n";

        
    }
    else if(decision == 2)
    {
        widthV:
        std::cout << "Enter width of triangle: ";
        std::cin >> width;

        heightV:
        std::cout << "Enter height of triangle: ";
        std::cin >> height;
        
        if(height <= 0)
        {
            goto widthV;
        } 
        
        lengthV:
        std::cout << "Enter length of prism: ";
        std::cin >> length;
        
        if(length <= 0)
        {
            goto heightV;
        }
        
        double volume = triangularprism(width, length, height);

        std::cout << "Volume: " << volume << "cm^3\n\n";

        
       
    }
    else
    {
        std::cout << "Value not recognized.\n";
        goto line;
    }

    line2:
    std::cout << "would you like to restart?(Y/N): ";
    std::cin >> decision2;

    if(decision2 == 'y' || decision2 == 'Y')
    {
        goto line;
    }
    else if(decision2 == 'n' || decision2 == 'N')
    {
        goto line3;
    }
    else if(decision2 == '0' && decision == 1 || decision2 == '0' && decision == 1)
    {
        goto heightA;
    }
    else if(decision2 == '0' && decision == 2 || decision2 == '0' && decision == 2)
    {
        goto lengthV;
    }
    line3:
    return 0;
}