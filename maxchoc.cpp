//Problem statement: 1 ruppee for 1 chocolate and with 3 wrappers you can buy 1 chocolate
// Input : No. of rupees 
//Output : Maximum number of chocolates

#include<iostream>
using namespace std;
int countRec(int choc, int wrap){
    if(choc<wrap){
        return 0;
    }
    int newchoc = choc/wrap;
    return newchoc + countRec(newchoc + choc%wrap, wrap);
}
int chocolate(int money, int price, int wrap){
    int choc = money/price;
    return choc + countRec(choc,wrap);
}
int main(){
    int money;
    cin>>money;
    int price = 1, wrap = 3;
    cout<<chocolate(money,price,wrap);
    return 0;
}