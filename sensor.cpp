#include<iostream>
#include<string>
using namespace std;

class tempSensor
{
public:
string name;
float reading;

void read()
{
    reading = 37.5;
}
void print()
{
   cout << name <<" : " <<reading <<"\n";
}
};
class pressureSensor
{
    public:
    string name;
    float reading;

    void read()
    {
        reading = 2;
    }
    void print ()
    {
        cout << name <<" : " <<reading <<"\n";
    }
};

int main()
{
    tempSensor ts;
    pressureSensor ps;
    ts.name= "TEMP_SENSOR_1";
    ts.read();
    ts.print();
    ps.name="PRESSURE_SENSOR_1";
    ps.read();
    ps.print();
    return 0;
}