#include<iostream>
#include<string>
using namespace std;

class tempSensor
{
private:
string name;
float reading;

public:
/**
 * COnstructors
 */
tempSensor(string n, float r)
{
    name = n;
    reading = r;
}
/**
 * Destructors
 */
~tempSensor()
{
    cout << "Tempsensor object destroyed" << "\n";
}

/************************************************************** */
/**
 * GET SET TEMPSENSOR FUNCTIONS
 */
float getTsReading(void)
{
    return reading;
}
void setTsReading(float r)
{
    if (r>-5 && r <200)
    reading = r;
}
/************************************************************** */

/**
 * I/O, O/P TS Functions
 */
void read()
{
    reading = 37.5;
}
void print()
{
   cout << name <<" : " <<reading <<"\n";
}
/************************************************************* */
};

class pressureSensor
{
    private:
    string name;
    float reading;

    public:
    /**
     * Constructors
     */
    pressureSensor(string n, float r)
    {
        name = n;
        reading = r;
    }

    /**
     * Destructor
     */
    ~pressureSensor()
    {
        cout << "Pressure sensor object destroyed" << "\n";
    }
    /*************************************************************** */
    /**
     * GET SET functions for Pressure sensor
     */
    float getPsReading(void)
    {
        return reading;
    }
    void setPsReading(float r)
    {
        if (r > -5 && r <200)
            reading = r;
    }
    /******************************************************************/

    /**
     * I/O and O/P functions
     */
    void read()
    {
        reading = 2;
    }
    void print ()
    {
        cout << name <<" : " <<reading <<"\n";
    }
    /**************************************************************** */
};

int main()
{
    tempSensor ts("TEMP_SENSOR_1", 23.6);
    pressureSensor ps("PRESSURE_SENSOR_1", 5);

    ts.setTsReading(5.5);
    ts.print();

    ps.setPsReading(201);
    ps.print();
    return 0;
}