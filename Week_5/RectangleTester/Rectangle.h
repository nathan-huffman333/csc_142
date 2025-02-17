# pragma once

class Rectangle{
    private:
        // The length and width of the rectangle is made private values.
        double length = 0;
        double width = 0; 
    public:
        // The private value of "length" is changed to the user's specification.
        void setLength(double userLength){length = userLength;};

        // The private value of "width" is changed to the user's specification.
        void setWidth(double userWidth){width = userWidth;};

        // The private variable "length" is returned to determine it's value.
        double getLength(){return length;};

        // The private variable "width" is returned to determine it's value.
        double getWidth(){return width;};

        // The area of the rectangle is calculated using the private values and returned.
        double getArea(){
            double area = (length * width);
            return area;};
};