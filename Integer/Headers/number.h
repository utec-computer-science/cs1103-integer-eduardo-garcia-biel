#include "header.h"

template<typename T>
class number{
    T value;
    public:
    number(){
        value=0;
    }
    number(T valor){
        value=valor;
    }
    number(const number& other){
        value=other.value;
    }
    operator T(){
        return this->value;
    }
    number operator + (const number& other){
        number lala;
        lala.value=value + other.value;
        return lala;
    }
    number operator += (const number& other){
        value += other.value;
        return value;
    }
    number operator -= (const number& other){
        value -= other.value;
        return value;
    }
    number operator = (const number& other){
        value = other.value;
        return value;
    }
    number operator - (const number& other){
        number lala;
        lala.value=value - other.value;
        return lala;
    }
    number operator * (const number& other){
        number lala;
        lala.value=value * other.value;
        return lala;
    }
    number operator *= (const number& other){
        value *= other.value;
        return value;
    }
    number operator / (const number& other){
        number lala;
        lala.value=value / other.value;
        return lala;
    }
    bool operator < (const number& other){
        if(value<other.value){return true;}
        else return false;}

    bool operator > (const number& other){
        if(value>other.value){return true;}
        else return false;}

    bool operator <= (const number& other){
        if(value<=other.value){return true;}
        else return false;}

    bool operator >= (const number& other){
        if(value>=other.value){return true;}
        else return false;}

    bool operator == (const number& other){
        if(value==other.value){return true;}
        else return false;}

    bool operator != (const number& other){
        if(value!=other.value){return true;}
        else return false;}

    friend T pow(number& i1, number& i2){return pow(i1.value,i2.value);};
    
    template<typename A>
    friend ostream& operator <<(ostream& os, const number<A>& other){
        return os<<other.value;}
    

};

