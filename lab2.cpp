#include "lab2.h"
int Keisan::suji (int a, int b){
	float i,f;
	i = (a/100)^2;
	f = b/i;
	return f;
}
void Keisan::handan (float a){
	if (a<15.0){
		cout << "Very severely underweight\n";
	}else if (a>=15.0 && a<16.0){
		cout << "Severely underweight\n";
	}else if (a>=16.0 && a<18.5){
		cout << "Underweight\n";
	}else if (a>=18.5 && a<25.0){
		cout << "Normal\n";
	}else if (a>=25.0 && a<30.0){
		cout << "Overweight\n";
	}else if (a>=30.0 && a<35.0){
		cout << "Obese Class I (Moderately obese)\n";
	}else if (a>=35.0 && a<40.0){
		cout << "Obese Class II (Severely obese)\n";
	}else if (a>=40.0){
		cout << "Obese Class III (Very severely obese)\n";
	}else {
	}
}
