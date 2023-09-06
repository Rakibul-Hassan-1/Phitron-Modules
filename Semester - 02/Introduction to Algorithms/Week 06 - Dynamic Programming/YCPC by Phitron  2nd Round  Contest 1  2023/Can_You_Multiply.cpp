#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long a, b;
        cin >> a >> b;
        
        long long product = a * b;
        int lastTwoDigits = product % 100; 
        
        cout << lastTwoDigits << endl;
    }
    
    return 0;
}
