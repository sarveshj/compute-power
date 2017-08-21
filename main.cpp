#include <iostream>
#include <string>

//function prototypes

bool check_input(double base, double exponent);
double compute_exp_val(double base, double exponent);

int main(){
	
	double base, exponent, val;

	// get input and make sure they are OK!
	std::cout << "enter base and exponent seperated by space, Press enter when done"; 
	
	if (! (std::cin >> base >> exponent)){

			// exit with a message!
			std::cout << "integers only \n";
			return 0;
		}

	else{

		val = compute_exp_val(base, exponent);
		std::cout <<" val is " << val <<"\n";
	}
	return 0;
	}


bool check_input(double base, double exponent){
	
		if (! (std::cin >> base >> exponent)){
			std::cout << "numbers only \n";
			return false;;
		}

		else
			return true;		  	
}

double compute_exp_val(double base, double exponent){

	double val = 1 ;

	// boundary condition check!!

	if (base == 0  && exponent < 0 ){
		std::cout << "Invalid inputs \n";
		return -9999999999;
	}

	else if (base == 0 || base == 1  || exponent == 1)
		return base ;

	else{

		// compute base^exponent

		for (; exponent > 0; -- exponent){
				val = val * base;
		}

		return val;
	}

}
