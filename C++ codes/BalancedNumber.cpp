// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;
bool balancedNumber(string N);

int main() {
    string num;
    bool res;
    cout << "Enter odd digit number: "; 
    cin >> num;             //input number
    while((num.size()%2)==0 || num.size()==1)
    {
        cout << "Invalid input!\nEnter odd digit number again: "; 
        cin >> num;         //input number again
    }
    res=balancedNumber(num);
    if(res==true)
    {
        cout << "Number is balanced"; 
    }
    else
    {
        cout << "Number is not balanced"; 
    }
    return 0;
}
//Any odd digit number is balanced if the sum of all digits to the left of the middle digit and the sum of all digits to the right of the middle digit is equal.
bool balancedNumber(string N)
{
    int j,i=0,sum1=0,sum2=0;
    
    while(N[i]!='\0'){
        sum1=sum1+N[i];
        i++;
    }
    for(j=((i+1)/2);j<i;j++){
        sum2=sum2+N[j];
    }
    sum1 = sum1-(N[(i-1)/2]+sum2);
    if(sum1==sum2){
        return true;
    }
    else{
        return false;
    }
    // code here
}
