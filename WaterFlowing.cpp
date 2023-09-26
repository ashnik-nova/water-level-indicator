#include <iostream>
#include <math.h>
#include <windows.h>
#include <thread>
#include <chrono>
#define pi 3.14

using namespace std;
class waterflow
{
private:
    int radius, length, breadth, choice, height, height_cylind;
    float circle_vol, rect_vol, cylind_vol, flow_rate, sec;

public:
    void getdata(void);
    void calculate(void);
    int decide(void);
    void analyze(void);
    void display(void);
};
void waterflow::getdata()
{
    cout << "Enter the radius:";
    cin >> radius;
    fflush(stdin);
    cout << endl
         << "Enter the flow rate:";
    cin >> flow_rate;
    cout << endl
         << "Enter the length and breadth:";
    cin >> length >> breadth;
    cout << endl
         << "Enter the height of the cylinder:";
    cin >> height_cylind;
    cout << endl
         << "Enter the height of the rectangle:";
    cin >> height;
}
int waterflow::decide()
{
    cout << "1.Rectangle/Square\n2.Circle\n3.cylinder" << endl;
    cout << "Enter your choice:";
    fflush(stdin);
    cin >> choice;
    return choice;
}
void waterflow::calculate()
{
    if (choice == 1)
    {
        rect_vol = length * breadth * height;
    }
    else if (choice == 2)
    {
        circle_vol = (4 / 3) * pi * radius * radius * radius;
    }
    else
    {
        cylind_vol = 4 * pi * radius * radius*height_cylind;
    }
}
void waterflow::display()
{

    cout << "The time required to fill the utensil is:" << sec;
}
void waterflow::analyze()
{
    if (choice == 1)
    {
        sec = rect_vol / flow_rate;
    }
    else if (choice == 2)
    {
        sec = circle_vol / flow_rate;
    }
    else
    {
        sec = cylind_vol / flow_rate;
    }
}
int main()
{
    waterflow obj;
    obj.getdata();
    obj.decide();
    obj.calculate();
    obj.analyze();
    obj.display();
    return 0;
}