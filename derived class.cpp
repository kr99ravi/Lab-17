//Program to create abstract class to calculate no_of_sides in the given geometrical group
#include <iostream>
using namespace std;

class Shape  //Base Class
{
public:
    int n;
  //Function to return the number of slides
    int no_of_sides()
    {
        return n;
    }
};
//Derived class1
class square : public Shape
{
public:
//Parameteriized constructor
    square(int n1)
    {
        n = n1;
    }
};
//Derived class2
class Triangle : public Shape
{
public:
//Parameteriized constructor 
    Triangle(int n1)
    {
        n = n1;
    }
};
//Derived class3
class pentagon : public Shape
{
public:
//Parameteriized constructor
    pentagon(int n)
    {
        this->n = n;
    }
};
//Deriver code
int main()
{
    //creating object of derived class1
    square s(4);
    //creating object of derived class2
    Triangle T1(3);
    //creating object of derived class3
    pentagon P(5);
    //Displaying the result for all derived class
    cout << "No of sides in square is : " << s.no_of_sides() << endl;
    cout << "No of sides in Triangle is : " << T1.no_of_sides() << endl;
    cout << "No of sides in pentagon is : " << P.no_of_sides() << endl;
    return 0;
}
