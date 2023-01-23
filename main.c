#include <stdio.h>
#include <windows.h>
#include <time.h>

int main () {
    system("color 3F");
int pin=1234, option, enteredPin, count=0, amount;
int balance=400;
char valuta [] = "RSD";
int countinueTransaction = 1;

time_t now;
time(&now);
printf("\n");
printf("\t\t\t\t\t             %s", ctime(&now));
printf("\n\t\t\t====*Dobrodosli na bankomat NLB Komercionalne banke====*");

while(pin != enteredPin){
    printf("\n Molimo vas unesite vas pin: ");
    scanf("%d", &enteredPin);
    if (enteredPin != pin) {
        Beep(610,1500);
        printf("Pogresan PIN, molimo vas unesite tacnu vrednost PIN-a");
    }count++;
        if(count == 3 && pin != enteredPin){
        }
}
 if (enteredPin = pin) {
        printf("Uneli ste tacan pin");
    }
    if (enteredPin = pin){
        printf("\n\t\t\t=======*Dostupne transakcije*======");
        printf("\n\n\t\t1.Prikaz sredstava");
        printf("\n\n\t\t2.Podizanje sredstava");
        printf("\n\n\t\t3.Depozitovanje sredstava");
        printf("\n\n\t Molimo vas izaberite neku od opcija!");
        scanf("%d", &option);
            switch (option){
            case 1:
                printf("\n\t\t Vase stanje na racunu iznosi %2d", balance);
                break;

        case 2:
            if (amount > balance){
                printf("Unesite iznos gotovine koji zelite podici: ");
                scanf("%d", &amount);
                printf("\n\t Nemate dovoljno sredstava na racunu!");
                break;
            }
            if (amount < balance){
                printf("Unesite iznos gotovine koji zelite podici: ");
                scanf("%d", &amount);
                printf("\n\t\t Povukli ste sredstva sa racuna. Vas balans iznosi %2d", balance);
                break;
            }
        case 3:
            printf("Unesite kolicinu sredstava koju zelite da uplatite na vlastiti racun");
            scanf("%d", &amount);
            balance+=amount;
            printf("Uspesno ste uplatili sredstva na vas racun sada iznosi %2d", balance );
    }
}
}
