#include <bits/stdc++.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    int answer;
    //Generate Random Number with time changing
    srand(time(0));
    //Range between 1 to 10
    answer=(rand()%10)+1;

    int guess;

    while (answer != guess)
    {

        cout<<"Guess between 0 to 10"<<endl;



        cout<<"Enter Your Number:-"<<endl;
        cin>> guess;

    }
    cout << "You Win"<<endl;

    return 0;
}