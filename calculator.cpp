#include <iostream>
#include <limits>
using namespace std;

int main(){

    int num_2, num_1;
    char oprt;
    int result;

    cout << "### Welcome to Simple Calculator ###" << endl;

    while (true){ 
        
        try
        {
            cout << "Enter first number: " << endl;
            cin >> num_1;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error ("invalid first number input!");
            }

            cout << "Enter Operation (+ , - , * , /) or 'e' to exit: " << endl;
            cin >> oprt;

            if (oprt == 'e'){
                break;
            }

            cout << "Enter second number: " << endl;
            cin >> num_2;

            if (cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                throw runtime_error ("invalid second number input!");
            }

            switch (oprt){
                case '+':
                    result = num_1 + num_2;
                    cout << result << endl;
                    break;
                
                case '-':
                    result = num_1 - num_2;
                    cout << result << endl;
                    break;

                case '*':
                    result = num_1 * num_2;
                    cout << result << endl;
                    break;

                case '/':
                    if (num_2 != 0)
                    {
                    result = num_1 / num_2;
                    cout << result << endl;
                    
                    }else{
                        cout << "division by zero!";
                    }
                    break; 
                    
                default:
                    cout << "invalid operation!" << endl;
                    break;
            }
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        cout << endl;
    }
       
    return 0;
}
