#include <iostream>

using namespace std;


int getDigits(int number);
int sumOddDigits(string cardNumber);
int sumEvenDigits(string cardNumber);

int main()
{
    string cardNumber;
    int result = 0;
    cout << "Enter your card number ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if(result % 10 == 0)
    {
        cout << "Your card is valid";
    }
    else{
        cout << "Your card is invalid";
    }

    return 0;
}

int getDigits(int number)    //This function is used to return the sum of digits
{

    return (number % 10) + (number/10 % 10);
    
}
int sumEvenDigits(string cardNumber){    //This function is used to get the even digits and pass them to getDigits function

    int sum = 0;
    for(int i = cardNumber.size() - 2; i>=0; i-=2)
    {
        sum += getDigits((cardNumber[i] - '0') * 2);
    }
    return sum;

}
int sumOddDigits(string cardNumber){    //This function is used to get the Odd digits and pass them to getDigits function

    int sum = 0;
    for(int i = cardNumber.size() - 1; i>=0; i-=2)
    {
        sum += getDigits(cardNumber[i] - '0');
    }
    return sum;

}
