
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void task_1() {
    double m = 0, p = 0, r = 0, s = 0, n = 0;
    cout << "Введите s, p, n" << endl;
    cin >> s >> p >> n;
    r = p / 100;
    if (s > 0 && n > 0 && p > 0) {
        if ((12 * pow(1 + r, n) - 1) != 0) {
            m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
        }
        else {
            cout << "Делить на 0 нельзя" << endl;
        }
    }
    else if (p == 0 && s > 0 && n > 0) {
        m = s / 12 * n;
    }
    else {
        cout << "Ошибка" << endl;
    }
    
    cout << "Месячная выплата = " << m << endl;
}

void task_2() {
    double mn = 0, m = 0, p = 0, rn = 0.0001, r = 0, s = 0, n = 0, a;
    cout << "Введите s, m, n" << endl;
    cin >> s >> mn >> n;
    if (s < 0 || mn < 0 || n < 0) {
        cout << "Ошибка" << endl;
    }
    else {
        while (m < mn) {
            r = rn;
            m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
            rn += 0.0001;
        }
    }
    cout << "Процент = " << r * 100 << endl;
}

void task_3() {
    string txti;
    ifstream fin("3.txt"); 
    if (!fin.is_open()) {
        cout << "Файла нет" << endl;
    }
    while (getline(fin, txti)) {
        cout << txti << endl;
    }
    fin.close();

}

void task_4() {
    string txti;
    char readl[1000];
    ifstream fin("3.txt");
    if (!fin.is_open()) {
        cout << "Файла нет" << endl;
    }
    while (fin.getline(readl, 1000)) {
        for (int i = 0; i < strlen(readl); i++) {
            if (isdigit(readl[i]) or readl[i] == '-' or readl[i] == ',' or readl[i] == '.') {
                cout << readl[i];
            }

        }
        cout << " ";
    }
    fin.close();
}

void task_5() {
    string x;
    int i = 0;
    getline(cin, x);
    for (int i = 0; i < x.length() - 1; i++) {
        for (int j = i+1; j < x.length(); j++) {
            if (x[i] > x[j]) {
                swap(x[i], x[j]);
            }
        }
    }
    cout << x;
}


int main()
{
    setlocale(LC_ALL, "");
    task_5();
    
}

