#include "header.h"

class integer{
    int value;
    public:
    integer(){
        value=0;
    }
    integer(int valor){
        value=valor;
    }
    integer operator += (const integer& other){
        value += other.value;
        return value;
    }
    integer operator -= (const integer& other){
        value -= other.value;
        return value;
    }
    integer operator = (const integer& other){
        value = other.value;
        return value;
    }
    integer operator - (const integer& other){
        integer lala;
        lala.value=value - other.value;
        return lala;
    }
    integer operator + (const integer& other){
        integer lala;
        lala.value=value + other.value;
        return lala;
    }
    integer operator * (const integer& other){
        integer lala;
        lala.value=value * other.value;
        return lala;
    }
    integer operator *= (const integer& other){
        value *= other.value;
        return value;
    }
    integer operator / (const integer& other){
        integer lala;
        lala.value=value / other.value;
        return lala;
    }
    bool operator < (const integer& other){
        if(value<other.value){return true;}
        else return false;}

    bool operator > (const integer& other){
        if(value>other.value){return true;}
        else return false;}

    bool operator <= (const integer& other){
        if(value<=other.value){return true;}
        else return false;}

    bool operator >= (const integer& other){
        if(value>=other.value){return true;}
        else return false;}

    bool operator == (const integer& other){
        if(value==other.value){return true;}
        else return false;}

    bool operator != (const integer& other){
        if(value!=other.value){return true;}
        else return false;}

    friend int pow(integer& i1, integer& i2);
    friend std::ostream& operator <<(std::ostream& os, const integer& other);

};

std::ostream& operator <<(std::ostream& os, const integer& other){
        cout<<other.value;
}

int pow(integer& i1, integer& i2){return pow(i1.value,i2.value);}