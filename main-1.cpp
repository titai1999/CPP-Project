#include <ctime>
#include <iostream>
#include <cstdlib>
#include<cmath>
#include<vector>


using namespace std;


const int N = 1000;             // particle count
double diameter = 1.0;          // Particle Diameter
double r_step = 5*diameter;   // Step size
double r_bind = 0.5*diameter;    // Distance to bind particle
double r_kill = 111;

     // vectors to store x and y coordinate
     vector<double> x_pos{0};
     vector<double> y_pos{0};

   //  double X[1000];
    // double Y[1000];

// function to generate random numbers between 0 and 1
float rand_func(){

        return (float) rand()/RAND_MAX ;
        }

bool bindcheck(double x, double y, vector<double> x_pos, vector<double> y_pos){
      bool bound = false;
      double dist;
       for(int i = 0; i < x_pos.size(); i++){
          dist = sqrt((x_pos[i] - x)*(x_pos[i] - x) + (y_pos[i] - y)*(y_pos[i] - y)) ; // distance between walking particle and fixed particles
       //   cout << dist << "\n";
	    if (dist < r_bind) {
	      x_pos[i+1] = x;
	      y_pos[i+1] = y;


	      //X[i] = x;
	      //Y[i] = y;
	   //   cout << "(" <<x_pos[i+1] << " , " << y_pos[i+1] << ")" << "\n";
	      bound = true;
             }
	return bound;
       }
}

int main()

{

     srand(static_cast<unsigned int>(std::time(nullptr)));


     double r_dist; // particle is spawned at this radial distance
     bool bound;
     const double pi = 3.14159265358979323846;
     double R1 = 100, R2 = 110;  // radius of outer and inner rings
     double theta,x,y;  // x & y are current position of particle
     double r;   // r is current radial distance

     for(int i = 0; i < 1000; i++){

        // initialize particle

        theta = (2.0)*pi*rand_func();
        r_dist = sqrt(rand_func()*(R1*R1 - R2*R2)+R2*R2) ;
        x =  r_dist * cos(theta);
       // cout << x << "\n";
        y =  r_dist * sin(theta);
       // cout << y << "\n";
        bound = false;

        // simulate Brownian motion until the particle is bound
        while(!bound){
            theta = (2.0)*pi*rand_func();
            x = x + r_step*cos(theta);
            y = y + r_step*sin(theta);

           // cout << x << " " << y << "\n";

            r = sqrt(abs(x*x) + abs(y*y));

            if(r > r_kill){
                // reinitialize particle
                theta = (2.0)*pi*rand_func();
                r_dist = sqrt(rand_func()*(R1*R1 - R2*R2)+R2*R2) ;
                x =  r_dist * cos(theta);
                y =  r_dist * sin(theta);
                bound = false;
            }
            bound = bindcheck(x,y,x_pos,y_pos);

        }

     }
    /* for (int i = 0; i < 1000; i++){
        fprintf(output,"%d\t%d\n", x_pos[i], y_pos[i]);
     }
     printf("data stored in dla.dat\n");
   fclose(output); */
   /*for (int i =0; i < 1000; i++){
    cout <<"(" <<x_pos[i] << " , " << y_pos[i] << ")" << "\n";
   }*/


    return 0;
}
