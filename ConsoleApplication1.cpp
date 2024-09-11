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
    AirConditioner(int temperature, int blowing_intensity) :temperature(temperature), blowing_intensity(blowing_intensity) {};

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



    void t_minus() {
        
        if (temperature < 30 && temperature>10) {
            temperature--;
        }
       
    }


    void t_plus(int ) {
        if (temperature >10 && temperature<30) {
            temperature++;
        }

    }


    void b_minus() {
        if (blowing_intensity < 10 && blowing_intensity>1) {
            blowing_intensity--;
        }
        else if (blowing_intensity <1) {
            blowing_intensity = 10;
        }
    }


    void b_plus() {
        if (blowing_intensity < 10 && blowing_intensity>1) {
            blowing_intensity++;
        }
        else if (blowing_intensity > 10) {
            blowing_intensity = 1;
        }
    }


};



int main()
{
   AirConditioner first= AirConditioner(10, 10);
    json j;
    j["temperature"] = first.getTemp();
    j["blowing"] = first.getBlowing();
    std::ofstream o("pretty.json");
    o << std::setw(4) << j << std::endl;
}

