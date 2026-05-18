
//Calculul impozitului pe venit 
//Scrie un program care citește salariul anual al unui salariat de la tastatură (în MDL) și calculează impozitul conform următoarelor reguli:
//Pentru salarii până la 200,000 MDL, impozitul este 0%.
//Pentru salarii între 200,001 și 350,000 MDL, impozitul este 10%.
//Pentru salarii peste 350,000 MDL, impozitul este 15%.


#include <stdio.h>

void functie();

int main() {

    while (1) {
        functie();
    }
    return 0;
};

void functie() {
        printf("Introdu salariu tau anual: ");
    int salary; //4 bytes // 32 bits 
    scanf("%f", &salary);
    
    int threshold = 200000;
    float tax = 0;
    if(salary < threshold){
        printf("Impozitul este: %f", tax);
    } else {
        tax = salary * 0.1; // 10% din salariu
       
    }
    printf("Salariul introdus: %.2f MDL\n", salary);
    printf("Impozitul calculat este: %.2f MDL\n", tax);
}