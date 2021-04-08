#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City {
    string name;
    long population;
    double cost; 
};

struct Country {
    string name;
    vector<City> cities;
};

struct Tours {
    string title;
    vector<Country> countries;
};

void ruler() {
    cout << "123456789012345678901234567890123456789012345678901234567890" << endl;
};

int main() {
    Tours tours{
        "Tour ticket prices from Miami",
        {
            {
                "Colombia", {
                    {"Bogota", 8778000, 400.98 },
                    {"Cali", 2401000, 424.12 },
                    {"Medellin", 2464000, 350.98 },
                    {"Cartagena", 972000, 345.34 }
                },
            },
            {
                "Brazil", {
                    {"Rio", 13500000, 567.83 },
                    {"Sao Paulo", 11311000, 975.12 },
                    {"Salvador", 12464000, 850.98 }
                },
            },
            {
                "Argentina", {
                    {"Buenos Aires", 3010000, 723.77 }
                }
            }
        }
    };


const int total_width {70};
const int field1_width {20}; //County Name
const int field2_width {20}; //City Name
const int field3_width {20}; //Population
const int field4_width {10}; //Cost

ruler();
int title_length = tours.title.length();
cout << setw((total_width - title_length)/2) << "" << tours.title << endl;
cout << endl;
cout << setw(field1_width) << left << "Country"
     << setw(field2_width) << left << "City"
     << setw(field3_width) << right << "Population"
     << setw(field4_width) << right << "Price"
     << endl;

cout << setw(total_width)
     << setfill('-')
     << ""
     << endl; // display total_width dashes

cout << setfill(' '); //reset setfill to blank spaces  
cout << setprecision(2) << fixed; //for displaying cost with 2 decimal digits

for(Country country : tours.countries) {
    for(size_t i = 0; i < country.cities.size(); i++) {
        cout << setw(field1_width) << left << ( (i == 0) ? country.name : "" )
             << setw(field2_width) << left << country.cities.at(i).name
             << setw(field3_width) << right << country.cities.at(i).population
             << setw(field4_width) << right << country.cities.at(i).cost
             << endl;   
    }
}



return 0;
};
