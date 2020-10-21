#include <iostream>
#include <string>
using namespace std;
int sum;
void convertToASCII(string letter)
{

    for (int i = 0; i < letter.length(); i++)
    {
        sum+=static_cast<int>(letter.at(i));
    }
}

int main()
{
    string plainText;
    cout << "Enter text to convert to ASCII: ";
    std::getline(cin, plainText);
    convertToASCII(plainText);

    printf("%d\n",sum);
    return 0;
}
