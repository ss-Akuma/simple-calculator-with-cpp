#include <iostream>
using namespace std;

int main(){

    int num_1, num_2;
    string oprt;
    int result;

    cout << "### Welcome to Simple Calculator ###" << endl;
    cout << "Enter first number: " << endl;
    cin >> num_1;
    cout << "Enter second number: " << endl;
    cin >> num_2;

    cout << "Enter Operation (+ , - , * , /): " << endl;
    cin >> oprt;

    while (true)
    {
        if(oprt == "+"){
            result = num_1 + num_2;
            cout << result << endl;
            break;
        }
        else if (oprt == "-"){
            result = num_1 - num_2;
            cout << result << endl;
            break;
        }else if (oprt == "*"){
            result = num_1 * num_2;
            cout << result << endl;
            break;
        }else if (oprt == "/"){
            result = num_1 / num_2;
            cout << result << endl;
            break;
        }else if (oprt == "Exit")
        {
            break;
        }else{
            cout << "please choose between these operations! or simply type Exit" << endl;
        }
        
    }
    
    return 0;
}
