#include <iostream>
#include <cmath>
using namespace std;
double f0(double t, double y0, double y1); //Returns derivative of y0
double f1(double t, double y0, double y1); //Returns derivative of y1

// metodo de Euler
void Eulerm(double t, double & y0, double & y1, double h){

double v=f0(t, y0, y1)+ h*f0(t, y0, y1);
double a=f1(t, y0, y1)+ h*f1(t, y0, y1);
std::cout<<t<<" "<<v<<" "<<a<<std::endl;
y0=v;
y1=a;

}


const double K = 100;
const double M = 2;
const double LAMBDA = 1;
const double DeltaT = 0.01;

int main(void)
{
  //
  double y0=1.0;
  double y1=0.0;
  double h=0.01;
  for(double t=0; t<=10; t+=h){
   Eulerm(t, y0,y1, DeltaT);}
    return 0;
}

double f0(double t, double y0, double y1)
{
  return y1;
}

double f1(double t, double y0, double y1)
{

  return (-K/M)*pow(y0, LAMBDA);
}
