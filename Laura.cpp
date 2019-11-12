#include <iostream>
#include <cmath>

void euler(float delta);
void implicit(float implicit);

int main(){
    euler(0.1);
    euler(0.01);
    euler(1.0);
    implicit(0.1);
    implicit(0.01);
    implicit(1.0);
    return 0; 
}

void euler(float delta){
    float yn=1.0;
    float tini=0.0;
    float omega=2.0;
    
    std::cout<<"La función euler retorna :"<<"\n";
    for(float tini=0.0; tini<=4/omega; delta){
        yn=yn - (delta * omega * yn);
        tini+=delta;
        std::cout<<tini<<" "<<yn<<std::endl;
    }       
}

void implicit(float delta){
    float yplus=1.0;
    float ti=0.0;
    float ome=2.0;
    
    std::cout<<"La función implicita retorna :"<<"\n";
    for(float ti=0.0; ti<=4/ome; delta){
        yplus=yplus/(1 + delta * ome);
        ti+=delta;
        std::cout<<ti<<" "<<yplus<<std::endl;
    }       
}
