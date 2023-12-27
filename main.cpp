#include <iostream>
using namespace std;

double pow(double base, char exponente){
    double result {base};
    for(char i{1}; i < exponente; ++i){
        result = result * base;
    }
    return result;
}

const float pi{3.14159f};

int main(){
    unsigned char temp;
    double numeraltemp;

    cout << "Sphere volume calculator" << endl;
    cout << "-------------------------------------" << endl;

    cout << "Do you have the diameter or the radius ( d / r ) : " ;
    cin >> temp;

    if (temp == 100 || temp == 68) {
        cout << "Input the diameter: " ;
        cin >> numeraltemp;
        numeraltemp /= 2;
        numeraltemp = (4.0 / 3) * pi * pow(numeraltemp, 3);
    } else if (temp == 114 || temp == 82) {
        cout << "Input the radius: ";
        cin >> numeraltemp;
        numeraltemp = (4.0 / 3) * pi * pow(numeraltemp, 3);
    } else {
        cout << "Fatal error crashing device" << std::endl;
        return 0;
    }
    temp = 252;

    cout << fixed << "El volumen de la esfera es : " << numeraltemp << temp;

    return 0;
}