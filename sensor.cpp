#include<iostream>
#include<string>
using namespace std;

class tempSensor
{
public:
string name;
float reading;

//adding constructors
tempSensor(string n, float r)
{
    name = n;
    reading = r;
}
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

    //adding constructors
    pressureSensor(string n, float r)
    {
        name = n;
        reading = r;
    }

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
    tempSensor ts("TEMP_SENSOR_1", 23.6);
    pressureSensor ps("PRESSURE_SENSOR_1", 5);
    ts.read();
    ts.print();
    ps.name="PRESSURE_SENSOR_1";
    ps.read();
    ps.print();
    return 0;
}