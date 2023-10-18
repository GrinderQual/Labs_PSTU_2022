#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Cars {
    string named;
    int number;
    int registr;
    string date;
};

Cars car[1000];
int quality = 0;

void inputFile()
{
    ofstream fout("text.txt");
    if (!fout.is_open()) {
        cout << "Eror!!!" << endl;
    }
    else
    {   
        fout << "Structures: ";
        fout << endl;
        for (int i = 0; i < quality; i++) {
            fout << "Car " << (i+1) << "th:" << endl;
            fout << "Named of car: " << car[i].named << endl;
            fout << "Serial number of car: " << car[i].number << endl;
            fout << "Register number of car: " << car[i].registr << endl;
            fout << "Date of manufactur a car: " << car[i].date << endl;
            fout << endl;
        }
    }

    fout.close();
    

    return;
};

void readCars() {
    ifstream fin("text.txt");
    string str;

    if (!fin.is_open()) {
        cout << "Eror!!!" << endl;
    }
    else
    {
        
        while (!fin.eof())
        {
            str = "";
            getline(fin, str);
            cout << str << endl;
        }


    }

    fin.close();
}

void funcCars() {

    ifstream fin("text.txt");
    ofstream fout("newtext.txt");
    string s, str, s1, s2;
    int i = 0, i2 = 1, j = -1, key = 3, nt, chek = 0, n1, n2, Origin_i = -1;

    cout << "Input registr named before that will be add new car from these: " << endl;
    for (int i1 = 0; i1 < quality; i1++) {
        cout << car[i1].registr << endl;
    }
    cout << endl;
    cout << "Choose ande write digit: " << endl;
    cin >> nt;
    cout << endl;
    for (int i1 = 0; i1 < quality; i1++) {
        if (nt == car[i1].registr) chek = 1;
    }

    if (chek != 1) {
        cout << "ERROR" << endl;
        cout << "ERROOOR" << endl;
        cout << "iNCORRECT DATA!" << endl;
        cout << "It is impossimble to execute the program" << endl;
    }
    else {

        cout << "Write name of new car (string): ";
        cin >> s1;
        cout << endl;
        cout << "Write serial number of new car (int): ";
        cin >> n1;
        cout << endl;
        cout << "Write register number of new car (int): ";
        cin >> n2;
        cout << endl;
        cout << "Write date of manufacture if new car (string): ";
        cin >> s2;
        cout << endl;
        
        i = key;

        fout << "List: " << endl;
        fout << endl;

        if (!fin.is_open()) {
            cout << "Eror!!!" << endl;
        }
        else
        {

            while (!fin.eof())
            {
                s = "";
                str = "";

                fin >> str;

                if (str == "Car") {
                    j++;
                }

                getline(fin, s);

                if (str == "Register" && car[j].registr == nt) {
                    fout << "Car " << i2 << "th:" << endl;
                    fout << "Named of car: " << s1 << endl;
                    fout << "Serial number of car: " << n1 << endl;
                    fout << "Register number of car: " << n2 << endl;
                    fout << "Date of manufactur a car: " << s2 << endl;
                    fout << endl;
                    i2++;
                }

                if (key <= j && i == j) {

                    fout << "Car " << (i2) << "th:" << endl;
                    fout << "Named of car: " << car[i].named << endl;
                    fout << "Serial number of car: " << car[i].number << endl;
                    fout << "Register number of car: " << car[i].registr << endl;
                    fout << "Date of manufactur a car: " << car[i].date << endl;
                    fout << endl;
                    i2++;
                    i++;

                }
            }

        }
        fout.close();
        fin.close();
        remove("text.txt");
        rename("newtext.txt", "text.txt");
    }
}

void createCars()
{   
    int qual;
    cout << "Input quality of cars: ";
    cin >> qual;
    cout << endl;
    Cars c;
    for (int i = 0; i < qual; i++) {
        cout << "Write named of car (string): ";
        cin >> c.named;
        cout << endl;
        cout << "Input serial nubmer (int): ";
        cin >> c.number;
        cout << endl;
        cout << "Input registr nubmer (int): ";
        cin >> c.registr;
        cout << endl;
        cout << "Write date of manufacture at format 'xx.yy.zzzz' (string): ";
        cin >> c.date;
        cout << endl;
        cout << endl;
        car[quality++] = c;
    }


    return;
};



int main()
{   
    
    createCars();
    inputFile();
    readCars();
    funcCars();

    return 0;
}


