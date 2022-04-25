#include <iostream>

using namespace std;

//Defining factoria formula
long long int factoria(int n){
    if(n==1 || n==0){
        return 1;
    } else {
        return n* factoria(n-1);
    }
}

//Defining pascal formula
int pascal(int n){
    for(int k=0; k<=n; k++){
        int nCr = factoria(n) / (factoria(n-k)*factoria(k));
        cout << nCr << " ";
    }
}

int main()
{
    system("cls"); //Clear console

    int n; //(n) Triangle limit

    cout << "======PASCAL TRIANGLE======" << endl;
    cout << "Note: Only numbers between 0 and 20 can be done" << endl;
    cout << endl;

    cout << "Enter limit: "; cin >> n; //Accept limit

    //Print combination of i at i line during each loop to form a triangle
    for(int i=0; i<=n; i++){
        pascal(i);
        cout << endl;
    }

    cout << endl;
    system("PAUSE");
    main();
}
