#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sEle;
    string sMedico;

    cin >> sEle >> sMedico;
    
    cout << (sEle.length() >= sMedico.length() ? "go" : "no") << endl;

    return 0;
}
