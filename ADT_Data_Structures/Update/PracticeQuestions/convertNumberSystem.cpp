#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int n)
{
    int binarynum = 0, i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binarynum = bit * pow(10, i) + binarynum;
        n = n / 2;
        i++;
    }
    return binarynum;
}

int decBin(int n)
{
    int bin = 0, i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        bin = bit * pow(10, i) + bin;
        n = n >> 1;
        i++;
    }
    return bin;
}

int binaryToDecimal(int n)
{

    int i = 0;
    int decimal = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}

int binDecBitwise(int n)
{
    int i = 0;
    int decimal = 0;
    while (n > 0)
    {

        int bit = n & 1;
        if (bit == 1)
        {
            decimal = decimal + pow(2, i);
        }
        n = n >> 1;
        i++;
    }
    return decimal;
}
int main()
{
    int n;
    cin >> n;
    // cout<<decimalToBinary(n);
    // cout<<decBin(n);
    // cout<<binaryToDecimal(n);
    // cout<<binDecBitwise(n);

    return 0;
}