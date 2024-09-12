// XML_Application.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "C:\Users\Danice\OneDrive\Documents\ConsoleApplication1\pugixml-1.14\src\pugixml.hpp"
#include "AirConditioner.h"
using namespace std;

pugi::xml_document generateXml(AirConditioner c) {
    pugi::xml_document doc;
    pugi::xml_node root = doc.append_child("AirConditioner");
    root.append_child("CurrentTemperature").text().set_value(std::to_string(c.getTemp()).c_str());
    root.append_child("BlowingIntensity").text().set_value(std::to_string(c.getBlowing).c_str());
    return doc;
}

int main()
{
    AirConditioner cond=AirConditioner(12,20);
    pugi::xml_document document = generateXml(cond);

    document.save_file("AirconditionerXmlData");
    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
