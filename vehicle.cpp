#include <iostream>
#include <string>
using namespace std;

string cartype[5] = {
    "sedan",
    "suv",
    "supersport",
    "crossover",
    "convertable"
};

class vehicle {
protected:
    string brand;
    int made;
    string environment;

    vehicle() {
    }
};


class car : public vehicle {
protected:
    string model;
    string type;
    int price;
    int V;

public:
    

    car(string b, int ma, string t, int p) {

        brand = b;
        made = ma;

        

        for (int i = 0; i < 5; i++) {

            if (cartype[i] == t) {
                type = t;
                break;
            }
        	if(i == 4) {
            cout << "We don't have this type of car, give the type later."
                 << endl;
        	}
		}

        

        price = p;
    }


    void setenv(string env) {
        environment = env;
    }


    void setV(int v) {
        V = v;
    }


    void settype(string t) {

        

        for (int i = 0; i < 5; i++) {

            if (cartype[i] == t) {
                type = t;
                break;
            }
	        if ( i == 4 ) {
	            cout << "We don't have this type of car,give the type later."
	                 << endl;
				}        
			}

    	
    }


    string gettype() {
        return type;
    }
};





int main() {

    car mycar1("Hyundai", 2014, "sedan", 10000);

    cout << mycar1.gettype()<<endl;
    
	
	mycar1.settype("suv");
	cout << mycar1.gettype()<<endl;
    return 0;
}



// this is just a comment