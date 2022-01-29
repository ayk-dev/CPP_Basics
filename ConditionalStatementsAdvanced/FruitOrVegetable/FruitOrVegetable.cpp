#include <iostream>

using namespace std;

int main()
{
    string product;
    cin >> product;

    string result;

    if (product == "banana" || product == "apple" || product == "kiwi" || product == "cherry"
        || product == "lemon" || product == "grapes") {
        result = "fruit";
    }
    else if (product == "tomato" || product == "cucumber" || product == "pepper" || product == "carrot") {
        result = "vegetable";
    }
    else {
        result = "unknown";
    }

    cout << result;

    return 0;
}

