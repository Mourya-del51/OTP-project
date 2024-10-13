#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int i;
int generateOTP(int length = 4)
{
    string otp = " ";
    for (i = 0; i < length; ++i)
    {
        otp += to_string(rand() % 10);
    }
    return stoi(otp);
}

class employee
{
public:
    void numberL(int length = 10)
    {
        for (int length = 0; length <= 10; length)
        {
            if (length < 10 && length > 10)
            {
                cout << " invalid number \n:";
                break;
            }
            else
                (length == 10)
              ;  {
                    cout << "valid number :\n";
                    break;
                }
        }
    }
};
int main()
{
    long int num;
    cout << "enter the your number :";
    cin >> num;
    employee ashish;
    ashish.numberL();
    srand(time(0));
    int otp = generateOTP();
    cout << "your otp is:  " << otp << endl;
    return 0;
}
