#include "AirConditioner.h"

AirConditioner::AirConditioner(int temperature, int blowing_intensity):temperature(temperature),blowing_intensity(blowing_intensity) {};
{
}

void AirConditioner::b_minus() {
	if (blowing_intensity > 10 && blowing_intensity < 30) {
		blowing_intensity--;
	}
	else if (blowing_intensity < 1) {
		blowing_intensity = 10;
	}
}

void AirConditioner::b_plus() {
	if (blowing_intensity > 10 && blowing_intensity < 30) {
		blowing_intensity++;
	}
	else if (blowing_intensity >10) {
		blowing_intensity = 1;
	}
}

void AirConditioner::t_minus() {
	if (temperature < 30 && temperature>10) {
		temperature--;
	}
}

void AirConditioner::t_plus() {
	if (temperature < 30 && temperature>10) {
		temperature++;
	}
}