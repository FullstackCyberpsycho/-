 //калькулятор2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include <ctime>
using namespace std;

int main()
{ 
    setlocale(LC_ALL, "RU");
    srand(time(nullptr));

    while (true)
    {
        string name;
        string er = "Error";
        cout << "введите ваше имя: ";
        cin >> name;

        short cheat;
        cout << "введите '111' чтобы активировать чит: ";
        cin >> cheat;
        if (cheat == 111)
        {
            cout << "1 - сломать программу" << endl;
            cout << "2 - стереть экран" << endl;
            cout << "3 - выдавать неправельные результаты" << endl;            

            short mod;
            cout << "введите номер режима: ";
            cin >> mod;
            if (mod == 1)
            {
                for (int i = 0; ; i++)
                {
                    cout << er << er << er << er << er << er << er << er << er << er << er;
                    cout << er << er << er << er << er << er << er << er << er << er << er;
                    cout << er << er << endl;
                }
                    
            }
            else if (mod == 2)
            {
                system("cls");
            }
            else if (mod == 3)
            {
                cout << "1 == + (плюс)" << endl
                    << "2 == - (минус)" << endl
                    << "3 == * (умножение)" << endl
                    << "4 == / (деление)" << endl << endl;

                short opeorator;

                cout << name << ", выберите номер оператор: ";
                cin >> opeorator;
                cout << " " << endl;
                switch (opeorator)
                {
                case 1:
                {
                    int num1, num2;
                    cout << name << ", введите первое число: ";
                    cin >> num1;

                    //cout << name << ", ваш оператор: + " << endl;
                    cout << name << ", введите второе число: ";
                    cin >> num2;
                    cout << " " << endl;

                    int otvet = num1 + num2;
                    otvet = rand() % otvet;
                    cout << name << ", ваш ответ: " << otvet << endl;
                    break;
                }

                case 2:
                {
                    int num1, num2;
                    cout << name << ", введите первое число : ";
                    cin >> num1;
                    cout << name << ", ваш оператор: - " << endl;
                    cout << " : ";
                    cin >> num2;
                    cout << name << ", введите второе число" << endl;

                    int otvet = num1 - num2;
                    otvet = rand() % otvet;
                    cout << name << ", ваш ответ: " << otvet << endl;
                    break;
                }
                case 3:
                {
                    int num1, num2;
                    cout << name << ", введите первое число : ";
                    cin >> num1;
                    cout << name << ", ваш оператор: * " << endl;
                    cout << name << ", введите второе число : ";
                    cin >> num2;
                    cout << " " << endl;

                    int otvet = num1 * num2;
                    otvet = rand() % otvet;
                    cout << name << ", ваш ответ: " << otvet;
                    break;
                }
                case 4:
                {
                    float num1, num2;
                    cout << name << ", ведите первое число: ";
                    cin >> num1;
                    cout << name << ", ваш оператор: / " << endl;
                    cout << name << ", ведите второе число: ";
                    cin >> num2;
                    cout << " " << endl;

                    float otvet = num1 / num2;
                    otvet = num1 * num1 / num2 - num2;
                    cout << name << ", ваш ответ: " << otvet << endl;

                    break;
                }

                default:
                    cout << "Error";
                }
            }
        }
        else
        {
            cout << "Error: 404" << endl;
        }

        cout << "1 == + (плюс)" << endl
            << "2 == - (минус)" << endl
            << "3 == * (умножение)" << endl
            << "4 == / (деление)" << endl << endl;
       
        short opeorator;

        cout << name << ", выберите номер оператор: ";
        cin >> opeorator;
        cout << " " << endl;
        switch (opeorator)
        {
        case 1:
        {
            int num1, num2;
            cout << name << ", введите первое число: ";
            cin >> num1;

            //cout << name << ", ваш оператор: + " << endl;
            cout << name << ", введите второе число: ";
            cin >> num2;
            cout << " " << endl;

            int otvet = num1 + num2;
            cout << name << ", ваш ответ: " << otvet << endl;
            break;
        }

        case 2:
        {
            int num1, num2;
            cout << name << ", введите первое число : ";
            cin >> num1;
            cout << name << ", ваш оператор: - " << endl;
            cout << " : ";
            cin >> num2;
            cout << name << ", введите второе число" << endl;

            int otvet = num1 - num2;
            cout << name << ", ваш ответ: " << otvet << endl;
            break;
        }
        case 3:
        {
            int num1, num2;
            cout << name << ", введите первое число : ";
            cin >> num1;
            cout << name << ", ваш оператор: * " << endl;
            cout << name << ", введите второе число : ";
            cin >> num2;
            cout << " " << endl;

            int otvet = num1 * num2;
            cout << name << ", ваш ответ: " << otvet;
            break;
        }
        case 4:
        {
            float num1, num2;
            cout << name << ", ведите первое число: ";
            cin >> num1;
            cout << name << ", ваш оператор: / " << endl;
            cout << name << ", ведите второе число: " << endl;
            cin >> num2;
            cout << " " << endl;

            float otvet = num1 / num2;
            cout << name << ", ваш ответ: " << otvet;

            break;
        }

        default:
            cout << "Error";
        }   
    }
    system ("pause");
    
    return 0;
}
/*for (int i = 0; i < 50; i++)
        {
            cout << "-";
        }

        int j = 1;

        while (j < 50)
        {
            cout << "-";

            j++;
        }

        int k = 1;

        do
        {
            cout << "-";

            k++;

        } while (k < 21);


        int num1, num2, resaut;
        char oper;

        cout << "1== -, 2== +, 3== *, 4== /" << endl;

        cout << "введи1: " << endl;
        cin >> num1;

        cout << "введи опера...: " << endl;
        cin >> oper;

        switch (oper)

            case 1:
        {
            oper=+;

            break;
        }
            case 2:
            {
                oper = -;

                break;
            }
            case 3:
            {
                oper = *;

                break;
            }
            case 4:
            {
                oper = /;

                break;
            }


        cout << "введи2: " << endl;
        cin >> num2;

        resaut = num1 oper  num2; // 1 (+, -,/, *) 1 = 2
        cout << resaut;*/
