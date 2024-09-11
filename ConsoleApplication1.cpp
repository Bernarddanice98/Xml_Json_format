#include <iostream>

class AirConditioner {
private:
    int temperature;
    int blowing_intensity;
public:
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
    std::cout << "Hello World!\n";
}

