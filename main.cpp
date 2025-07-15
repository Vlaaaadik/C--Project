#include <iostream>
using namespace std;

int main() {

    int p0 = 1000;
    int a = 0;
    while (p0 < 1200) {
      p0 = p0 * 1.02 + 50;
      a ++;
      cout << p0 << " \n" << endl;
    
    }
    
    cout << p0;
    cout << " It will need " <<a<< " entire years" << endl;
    
    cout << "Hello GitHub!!!" << endl;

    return 0;
}