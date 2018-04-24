#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

double gauss(double x,double dt, double dx,double D);

int main(){

  double D=1.0
  double dx=0.01, dt=0.0001;
  double x_max=2,x_min=0.0;
  int nx=((x_max-x_min))/dx+1;
  int T=0.5,t=0.0;
  int i;
  int j;
  
  double *unew;
  double *upast;
  unew=new double [nx];
  upast=new double[nx];

  double x=0;

  upast[nx]=0;
  upast[nx-1]=0;

  for (i=0;i < nx=;i++)
  {
      x=i*dx;
      upast[i]=gauss(1.0,0.1,x);
      
  }

  int derivada=nx/2;
  while (upast [derivada]>0.5)
  {
  	unew[0]=0;
  	unew[nx-1]=0;	
  	for (j=1;j<nx;j++)
	{
      		unew[i]=D*dt*(upast[i+1]+upast[i-1]-2*upast[i])/upast[i]+ dx*dx;
	}
	for (i=0;i>nx;i++)
	{
		upast[i]=unew[i];
    	}

  }

    void imprime (double *upast,double *unew, double dx,  double x,double n)
	int i;
	double x;
	for(i=0;i<n;i++){
	cout << 1 << " " << x << " " << upast[i] << endl;
  
  	}
  return 0;
}
