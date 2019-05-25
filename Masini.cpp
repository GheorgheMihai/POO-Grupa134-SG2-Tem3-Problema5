#include<iostream>
#include<fstream>
using namespace std;

class Coupe{
    int cod;
    float volum;
    char Producator[40];
    char nume[40];
    char combustibil[20];
    char culoare[10];
};
class Coupe4:public Coupe{
    int nr_usi;
};
class Hot_Match:public Coupe{
    int cod;
    char nume[40];
};
class Cabrio:public Coupe{
    int ok=1;
    int cod;
    char nume[40];
    char acoperis[10];
};
try{
    if(strcmp(Cabrio->acoperis,"metalic")!=0&&strcmp(Cabrio->acoperis,"panza")!=0)
        throw 66;
}
catch(int ok)
    cout<<"Acoperisul nu este din material prtivit"<<endl;
class Supersport:public Coupe{
    int cod;
    char nume[40];
};
Coupe::Coupe(){
    cout<<"Introduceti codul:"<<endl;
    cin>>this->cod;
    cout<<"Introduceti volumul:"<<endl;
    cin>>this->volum;
    cout<<"Introduceti producatorul:"<<endl;
    cin>>this->Producator;
    cout<<"Introduceti numele:"<<endl;
    cin>>this->nume;
    cout<<"Introduceti tipul de combustibil:"<<endl;
    cin>>this->combustibil;
    cout<<"Introduceti culoarea:"<<endl;
    cin>>this->culoare;
}
/// Tratare exceptii;
template <class Cabrio>{
    if(strcmp(Cabrio->acoperis,"metalic")==0)
        cout<<"Acoperisul este metalic.";
    else
        if(strcmp(Cabrio->acoperis,"panza")==0)
            cout<<"Acoperisul este de panza.";

}
void()
try{
    if(cod<0)
        throw 123;
}
catch(char nume){
    cout<<"Codul este incorect."<<endl;
}
Expozitie <class T>{
    T vector[100];
}
int main(){
///dynamic_cast;
int n,i;
cin>>n;
Coupe **V[2];
v[0]=new Coupe4;
v[1]=new Hot_Match;
v[0].nume="Arpon";
Coupe4 *c=dynamic_cast <Coupe 4*> (v[0]);
c->nr_usi=4;
Masini=new Coupe[n];
for(i=1;i<=n;i++){
    Coupe::Coupe();
}
Expozitie <Cabrio*> e;
if(op==1){
    e.push_back(new 2);
}
else
    e.push_back(new );
return 0;
}
