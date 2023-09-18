#include <iostream>
#include <string>

using namespace std;

int Digit(int count, int chek, string s) {

    int digit1, tens, crisis;


    digit1 = 1;
    tens = 1;
    crisis = 0;


    for (int i = count; i >= chek; i--) {

        if (s[i] == '1' && count == i) digit1 *= 1;
        if (s[i] == '2' && count == i) digit1 *= 2;
        if (s[i] == '3' && count == i) digit1 *= 3;
        if (s[i] == '4' && count == i) digit1 *= 4;
        if (s[i] == '5' && count == i) digit1 *= 5;
        if (s[i] == '6' && count == i) digit1 *= 6;
        if (s[i] == '7' && count == i) digit1 *= 7;
        if (s[i] == '8' && count == i) digit1 *= 8;
        if (s[i] == '9' && count == i) digit1 *= 9;
        if (s[i] == '0' && count == i) crisis = 1;


        if (s[i] == '1' && count != i) digit1 += (1 * tens);
        if (s[i] == '2' && count != i) digit1 += (2 * tens);
        if (s[i] == '3' && count != i) digit1 += (3 * tens);
        if (s[i] == '4' && count != i) digit1 += (4 * tens);
        if (s[i] == '5' && count != i) digit1 += (5 * tens);
        if (s[i] == '6' && count != i) digit1 += (6 * tens);
        if (s[i] == '7' && count != i) digit1 += (7 * tens);
        if (s[i] == '8' && count != i) digit1 += (8 * tens);
        if (s[i] == '9' && count != i) digit1 += (9 * tens);

        tens *= 10;
    }
    if (crisis == 1) digit1 -= 1;

    return digit1;

}

int Digit(int count) {
    int tens = 1;

    for (int i = 0; i < count; i++) tens *= 10;

    return tens;
}

void Digit(int nemo1, int nemo2, int numu1, int numu2, int deno1, int deno2, int denominator) {
    int number, neminator, n = 1, nK = 0;
    if (nemo1 > nemo2) {
        neminator = nemo1 - nemo2;
        if (numu1 >= numu2) {
            number = numu1 - numu2;
        }
        else
        {
            number = (denominator + numu1) - numu2;
            neminator -= 1;
        }
    }
    else {
        if (nemo2 > nemo1) {
            neminator = nemo2 - nemo1;
            n = -1;
            if (numu1 > numu2) {
                number = (denominator + numu2) - numu1;
                neminator -= 1;
            }
            else
            {
                number = numu2 - numu1;
            }
        }
        else {
            if (nemo1 == nemo2) {
                neminator = 0;
                if (numu1 >= numu2) {
                    number = numu1 - numu2;
                }
                else {
                    number = numu2 - numu1;
                    nK = 1;
                }
            }
        }
    }




    cout << "The difference of an ordinary fraction: ";
    if (nemo1 != 0) cout << nemo1;
    cout << "(" << numu1 << "/" << denominator << ") - ";
    if (nemo2 != 0) cout << nemo2;
    cout << "(" << numu2 << "/" << denominator << ") = ";
    if (neminator != 0) cout << neminator * n;
    if (nK == 1) cout << "-" << number << "/" << denominator << endl;
    if (nK == 0) cout << "(" << number << "/" << denominator << ")" << endl;

    return;
}

void Digit(double fracdigit1, double fracdigit2) {
    double finalfraction;
    finalfraction = fracdigit1 - fracdigit2;
    cout << "The difference of a demical fraction: " << fracdigit1 << " - " << fracdigit2 << " = " << finalfraction << endl;

}
int main()
{
    string s, sS;
    int counter1, counter2, generalcount1, generalcount2, cc1, cc2;
    int counter1_2, counter2_2, generalcount1_2, generalcount2_2, cc1_2, cc2_2;
    int digit1, digit2, d_digit1, d_digit2, tens, crisis, chek, zeros1, zeros2;
    int helpoperation1, tenZ;
    double tensfraction1, tensfraction2, fraction1, fraction2;
    int key1, key2;
    cout << "Write first digit" << endl;
    getline(cin, s);
    cout << "Write second digit" << endl;
    getline(cin, sS);
    counter1 = s.length();
    counter2 = s.find('.') + 1;
    counter1_2 = sS.length();
    counter2_2 = sS.find('.') + 1;


    chek = 0;
    generalcount1 = counter1 - counter2;
    generalcount2 = counter2 - 2;
    cc1 = counter1 - 1;
    cc2 = counter2 - 1;
    generalcount1_2 = counter1_2 - counter2_2;
    generalcount2_2 = counter2_2 - 2;
    cc1_2 = counter1_2 - 1;
    cc2_2 = counter2_2 - 1;

    digit1 = Digit(generalcount2, chek, s);
    d_digit1 = Digit(cc1, cc2, s);
    zeros1 = Digit(generalcount1);

    digit2 = Digit(generalcount2_2, chek, sS);
    d_digit2 = Digit(cc1_2, cc2_2, sS);
    zeros2 = Digit(generalcount1_2);

    tensfraction1 = (double(d_digit1)) / zeros1;
    tensfraction2 = (double(d_digit2)) / zeros2;
    if (s[0] == '-') {
        digit1 *= -1;
        d_digit1 *= -1;
        tensfraction1 *= -1;
    }
    if (sS[0] == '-') {
        digit2 *= -1;
        d_digit2 *= -1;
        tensfraction2 *= -1;
    }

    tenZ = 1;
    if (zeros1 > zeros2) {
        helpoperation1 = zeros1 / zeros2;
        tenZ = zeros2 * helpoperation1;
        d_digit2 *= helpoperation1;
    }
    else {
        if (zeros2 > zeros1) {
            helpoperation1 = zeros2 / zeros1;
            tenZ = zeros1 * helpoperation1;
            d_digit1 *= helpoperation1;
        }
        else {
            if (zeros2 == zeros1) {
                tenZ = zeros1;
            }
        }
    }

    fraction1 = digit1 + tensfraction1;
    fraction2 = digit2 + tensfraction2;


    cout << endl;
    Digit(fraction1, fraction2);

    Digit(digit1, digit2, d_digit1, d_digit2, zeros1, zeros2, tenZ);

    return 0;
}