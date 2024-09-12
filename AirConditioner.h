#pragma once
#include <iostream>
#include <fstream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

class AirConditioner {
private:
    int temperature;
    int blowing_intensity;


public:
    AirConditioner(int temperature, int blowing_intensity){};

    int getTemp() {
        return temperature;
    }



    int getBlowing() {
        return blowing_intensity;
    }



    void setTemp(int a) {
        temperature = a;
    }


    void setBlowing(int b) {
        blowing_intensity = b;
    }



    void t_minus() {}
    void t_plus(int) {}
    void b_minus() {}
    void b_plus() {}
};



int main()
{
    AirConditioner first = AirConditioner(10, 10);
    json j;
    j["temperature"] = first.getTemp();
    j["blowing"] = first.getBlowing();
    std::ofstream o("pretty.json");
    o << std::setw(4) << j << std::endl;
}

