#include <stdio.h>
#include <stdbool.h>

#define NUM_HOSPITALS 50
//#define FILENAME "management.dat"

struct Hospital{
    char name[50];
    int beds;
    char city[50];
};

struct Patient{
    char name[50];
    int age;
    int bed_number;
    bool released;
    char hospital_name[50];
};

typedef struct Hospital hospital;
typedef struct Patient patient;


void printHospitals(hospital);
void printPatients(patient);
void sort_by_available_beds(hospital[], int length);




int main(){

}