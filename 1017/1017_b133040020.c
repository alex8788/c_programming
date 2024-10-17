#include <stdio.h>
#include <string.h>

int main()
{
    int month, date;
    char zodiacSign[20];

    printf("Please enter the month:\n");
    scanf("%d", &month);

    // Error Handling of month
    if (month < 1 || month > 12) {
        printf("Please enter correct month.\n");
        return 0;
    }

    printf("Please enter the date:\n");
    scanf("%d", &date);

    // Error Handling of date
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {  // 大月
        if (date < 1 || date > 31) {
            printf("Please enter correct date.\n");
            return 0;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {  // 小月
        if (date < 1 || date > 30) {
            printf("Please enter correct date.\n");
            return 0;
        }
    } else if (month == 2) {  // 2月
        if (date < 1 || date > 29) {
            printf("Please enter correct date.\n");
            return 0;
        }
    }

    switch (month)
    {
        case 1:
            date <= 19 ? strcpy(zodiacSign, "Capricorn") : strcpy(zodiacSign, "Aquarius");
            break;
        case 2:
            date <= 18 ? strcpy(zodiacSign, "Aquarius") : strcpy(zodiacSign, "Pisces");
            break;
        case 3:
            date <= 20 ? strcpy(zodiacSign, "Pisces") : strcpy(zodiacSign, "Aries");
            break;
        case 4:
            date <= 19 ? strcpy(zodiacSign, "Aries") : strcpy(zodiacSign, "Taurus");
            break;
        case 5:
            date <= 20 ? strcpy(zodiacSign, "Taurus") : strcpy(zodiacSign, "Gemini");
            break;
        case 6:
            date <= 21 ? strcpy(zodiacSign, "Gemini") : strcpy(zodiacSign, "Cancer");
            break;
        case 7:
            date <= 22 ? strcpy(zodiacSign, "Cancer") : strcpy(zodiacSign, "Leo");
            break;
        case 8:
            date <= 22 ? strcpy(zodiacSign, "Leo") : strcpy(zodiacSign, "Virgo");
            break;
        case 9:
            date <= 22 ? strcpy(zodiacSign, "Virgo") : strcpy(zodiacSign, "Libra");
            break;
        case 10:
            date <= 23 ? strcpy(zodiacSign, "Libra") : strcpy(zodiacSign, "Scorpio");
            break;
        case 11:
            date <= 22 ? strcpy(zodiacSign, "Scorpio") : strcpy(zodiacSign, "Sagittarius");
            break;
        case 12:
            date <= 21 ? strcpy(zodiacSign, "Sagittarius") : strcpy(zodiacSign, "Capricorn");
            break;
    }

    printf("%02d/%02d belongs to %s.\n", month, date, zodiacSign);
    return 0;
};