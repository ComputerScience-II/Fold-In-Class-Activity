#include <iostream>
#include <vector>
#include <functional>
#include <cassert>
using namespace std;


int fold(const vector<int>& a, function<int(int,int) > f, int i = 0) {


    if (i == a.size() - 1) {

        return a[i];

    } 
    
    else {

        return f(a[i], fold(a, f, i + 1));

    }

}


int addition(int x, int y) {

        return x + y;

}
    


int main() {

    vector<int> a = {1, 2, 3, 4, 5};

    assert(fold(a, addition) == 15);

    

    cout << fold(a, addition) << "\n";


    return 0;
}


    