#ifndef EJEMPLO1_PROMEDIO_CALUMNO_H
#define EJEMPLO1_PROMEDIO_CALUMNO_H

#include <string>
using namespace std;

class CAlumno {
private:
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    float  eT,eD,sP1,sP2,sP3,sP4,pY1,pY2;
public:
    CAlumno(){} //-- es el constructor por defecto
    CAlumno(string _Nombre, string _aPellidoPaterno, string _aPellidoMaterno, float _eT,float _eD, float _sP1,
            float _sP2, float _sP3,float _sP4,float _pY1,float _pY2): nombre(_Nombre), apellidoPaterno(_aPellidoPaterno),
                                                                      apellidoMaterno(_aPellidoMaterno), eT(_eT),eD(_eD),
                                                                      sP1(_sP1),sP2(_sP2),sP3(_sP3),sP4(_sP4),
                                                                      pY1(_pY1),pY2(_pY2) {}
    ~CAlumno(){}  //-- destructor
    //--- metodos setters
    void setnombre(string _Nombre){nombre=_Nombre;}
    void setapellidoPaterno(string _aPellidoPaterno){apellidoPaterno=_aPellidoPaterno;}
    void setapellidoMaterno(string _aPellidoMaterno){apellidoMaterno=_aPellidoMaterno;}
    void seteT(float _eT){ eT=_eT;}
    void seteD(float _eD){ eD=_eD;}
    void setsP1(float _SP1){sP1=_SP1;}
    void setsP2(float _SP2){sP2=_SP2;}
    void setsP3(float _SP3){sP3=_SP3;}
    void setsP4(float _SP4){sP4=_SP4;}
    void setpY1(float _pY1){pY1=_pY1;}
    void setpY2(float _pY2){pY2=_pY2;}
    //--- metodos getters
    string getnombre(){return(nombre);}
    string getapellidoPaterno(){return apellidoPaterno;}
    string getapellidoMaterno(){return apellidoMaterno;}
    float geteT(){return eT;}
    float geteD(){return eD;}
    float getsP1(){return sP1;}
    float getsP2(){return sP2;}
    float getsP3(){return sP3;}
    float getsP4(){return sP4;}
    float getpY1(){return pY1;}
    float getpY2(){return pY2;}

    float PromedioPonderado();
    float PromediodeSetdeProblemas();
};

#endif //EJEMPLO1_PROMEDIO_CALUMNO_H