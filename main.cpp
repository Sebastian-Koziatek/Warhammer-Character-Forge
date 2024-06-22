#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    //srand(time(0));
    //int randomRace = rand() % 100 + 1;
    int randomRace = 93;
    std::string rasa;
    if (randomRace <= 90) rasa = "Czlowiek";
    else if (randomRace <= 94) rasa = "Niziolek";
    else if (randomRace <= 98) rasa = "Krasnolud";
    else if (randomRace == 99) rasa = "WysokiElf";
    else rasa = "LesnyElf";

    std::cout << "Rzut na rase: " << randomRace << std::endl;
    std::cout << "Wylosowana rasa: " << rasa << std::endl;

    //int randomProf = rand() % 47 + 1;
    int randomProf = 53;
    std::string profesja;
    std::cout << "Rzut na profesje: "<< randomProf << std::endl;

    //Człowiek:
if (rasa == "Czlowiek") {
    if (randomProf == 1) profesja = "Aptekarka";
    else if (randomProf == 2) profesja = "czarodziej";
    else if (randomProf == 3) profesja = "inzynier";
    else if (randomProf >= 4 && randomProf <= 8) profesja = "Kaplan";
    else if (randomProf == 9 || randomProf == 10 || randomProf == 11) profesja = "Medyczka";
    else if (randomProf == 12) profesja = "Prawniczka";
    else if (randomProf == 13 || randomProf == 14) profesja = "Uczony";
    else if (randomProf == 15) profesja = "Agitator";
    else if (randomProf == 16) profesja = "Kupiec";
    else if (randomProf >= 17 && randomProf <= 19) profesja = "Mieszczka";
    else if (randomProf == 20 || randomProf == 21) profesja = "Rzemieslniczka";
    else if (randomProf == 22) profesja = "Straznik";
    else if (randomProf == 23 || randomProf == 24) profesja = "Szczurolap";
    else if (randomProf == 25) profesja = "Sledczy";
    else if (randomProf == 26 || randomProf == 27) profesja = "Zebrak";
    else if (randomProf == 28) profesja = "Artystka";
    else if (randomProf == 29) profesja = "Doradca";
    else if (randomProf == 30) profesja = "Namiestnik";
    else if (randomProf == 31) profesja = "Posel";
    else if (randomProf >= 32 && randomProf <= 34) profesja = "Sluzaca";
    else if (randomProf == 35) profesja = "Szlachcic";
    else if (randomProf == 36) profesja = "Szpieg";
    else if (randomProf == 37) profesja = "Zwadzca";
    else if (randomProf >= 38 && randomProf <= 42) profesja = "Chlopka";
    else if (randomProf == 43) profesja = "Gornik";
    else if (randomProf == 44) profesja = "Guslarz";
    else if (randomProf == 45 || randomProf == 46) profesja = "Łowczyni";
    else if (randomProf == 47) profesja = "Mistyczka";
    else if (randomProf == 48) profesja = "Zarządca";
    else if (randomProf == 49) profesja = "Zielarka";
    else if (randomProf == 50) profesja = "Zwiadowca";
    else if (randomProf == 51 || randomProf == 52) profesja = "Biczownik";
    else if (randomProf == 53) profesja = "Domokrążca";
    else if (randomProf >= 54 && randomProf <= 55) profesja = "Kuglarka";
    else if (randomProf == 56) profesja = "Łowca czarownic";
    else if (randomProf == 57) profesja = "łowczyni nagród";
    else if (randomProf == 58) profesja = "Posłaniec";
    else if (randomProf == 59) profesja = "Strażnik Dróg";
    else if (randomProf == 60) profesja = "Woźnica";
    else if (randomProf == 61 || randomProf == 62) profesja = "Doker";
    else if (randomProf >= 63 && randomProf <= 65) profesja = "Flisak";
    else if (randomProf == 66) profesja = "Płotka Rzeczna";
    else if (randomProf == 67) profesja = "Pirat Rzeczny";
    else if (randomProf == 68) profesja = "Przemytniczka";
    else if (randomProf == 69 || randomProf == 70) profesja = "Przewoźnik";
    else if (randomProf == 71 || randomProf == 72) profesja = "Strażnik Rzeczny";
    else if (randomProf == 73 || randomProf == 74) profesja = "Żeglarz";
    else if (randomProf >= 75 && randomProf <= 78) profesja = "Banita";
    else if (randomProf == 79) profesja = "Czarownica";
    else if (randomProf == 80) profesja = "Paser";
    else if (randomProf == 81) profesja = "Hiena Cmentarna";
    else if (randomProf == 82 || randomProf == 83) profesja = "Rajfur";
    else if (randomProf == 84) profesja = "Rekieterka";
    else if (randomProf == 85) profesja = "Szarlatan";
    else if (randomProf >= 86 && randomProf <= 88) profesja = "Złodziej";
    else if (randomProf == 89) profesja = "Gladiator";
    else if (randomProf == 90) profesja = "Kapłan Bitewny";
    else if (randomProf == 91 || randomProf == 92) profesja = "Kawalerzysta";
    else if (randomProf == 93 || randomProf == 94) profesja = "Ochroniarz";
    else if (randomProf == 95) profesja = "Oprych";
    else if (randomProf == 96) profesja = "Rycerz";
    else if (randomProf >= 97 && randomProf <= 100) profesja = "Żołnierz";
}
    // Niziołek
    else if (rasa == "Niziolek") {
        if (randomProf == 1) profesja = "Aptekarka";
        else if (randomProf == 2) profesja = "Inżynier";
        else if (randomProf >= 3 && randomProf <= 4) profesja = "Medyczka";
        else if (randomProf >= 5 && randomProf <= 6) profesja = "Prawniczka";
        else if (randomProf >= 7 && randomProf <= 8) profesja = "Uczony";
        else if (randomProf >= 9 && randomProf <= 10) profesja = "Agitator";
        else if (randomProf >= 11 && randomProf <= 14) profesja = "Kupiec";
        else if (randomProf >= 15 && randomProf <= 17) profesja = "Mieszczka";
        else if (randomProf >= 18 && randomProf <= 22) profesja = "Rzemieślniczka";
        else if (randomProf >= 23 && randomProf <= 24) profesja = "Strażnik";
        else if (randomProf >= 28 && randomProf <= 29) profesja = "Śledczy";
        else if (randomProf >= 30 && randomProf <= 33) profesja = "Żebrak";
        else if (randomProf >= 34 && randomProf <= 35) profesja = "Artystka";
        else if (randomProf == 36) profesja = "Doradca";
        else if (randomProf >= 37 && randomProf <= 38) profesja = "Namiestnik";
        else if (randomProf == 39) profesja = "Poseł";
        else if (randomProf >= 40 && randomProf <= 45) profesja = "Służąca";
        else if (randomProf == 46) profesja = "Szpieg";
        else if (randomProf >= 47 && randomProf <= 49) profesja = "Chłopka";
        else if (randomProf == 50) profesja = "Górnik";
        else if (randomProf >= 51 && randomProf <= 52) profesja = "Łowczyni";
        else if (randomProf == 53) profesja = "Zarządca";
        else if (randomProf >= 54 && randomProf <= 56) profesja = "Zielarka";
        else if (randomProf == 57) profesja = "Zwiadowca";
        else if (randomProf >= 58 && randomProf <= 59) profesja = "Domokrążca";
        else if (randomProf >= 60 && randomProf <= 62) profesja = "Kuglarka";
        else if (randomProf == 63) profesja = "Łowczyni Nagród";
        else if (randomProf >= 64 && randomProf <= 65) profesja = "Posłaniec";
        else if (randomProf == 66) profesja = "Strażniczka Dróg";
        else if (randomProf >= 67 && randomProf <= 68) profesja = "Woźnica";
        else if (randomProf >= 69 && randomProf <= 71) profesja = "Doker";
        else if (randomProf >= 72 && randomProf <= 74) profesja = "Flisak";
        else if (randomProf == 75) profesja = "Pilotka Rzeczna";
        else if (randomProf >= 76 && randomProf <= 79) profesja = "Przemytniczka";
        else if (randomProf == 80) profesja = "Przewoźnik";
        else if (randomProf == 81) profesja = "Strażnik Rzeczny";
        else if (randomProf == 82) profesja = "Żeglarz";
        else if (randomProf == 83) profesja = "Banita";
        else if (randomProf == 84) profesja = "Paser";
        else if (randomProf == 85) profesja = "Hiena Cmentarna";
        else if (randomProf >= 86 && randomProf <= 88) profesja = "Rajfur";
        else if (randomProf == 89) profesja = "Rekieterka";
        else if (randomProf == 90) profesja = "Szarlatan";
        else if (randomProf >= 91 && randomProf <= 94) profesja = "Złodziej";
        else if (randomProf == 95) profesja = "Gladiator";
        else if (randomProf >= 96 && randomProf <= 97) profesja = "Ochroniarz";
        else if (randomProf >= 98 && randomProf <= 100) profesja = "Żołnierz";
}
    // Krasnolud
    else if (rasa == "Krasnolud") {
        if (randomProf == 1) profesja = "Aptekarka";
        else if (randomProf >= 2 && randomProf <= 4) profesja = "Inżynier";
        else if (randomProf == 5) profesja = "Medyczka";
        else if (randomProf >= 6 && randomProf <= 7) profesja = "Prawniczka";
        else if (randomProf >= 8 && randomProf <= 9) profesja = "Uczony";
        else if (randomProf >= 10 && randomProf <= 11) profesja = "Agitator";
        else if (randomProf >= 12 && randomProf <= 15) profesja = "Kupiec";
        else if (randomProf >= 16 && randomProf <= 21) profesja = "Mieszczka";
        else if (randomProf >= 22 && randomProf <= 27) profesja = "Rzemieślniczka";
        else if (randomProf >= 28 && randomProf <= 30) profesja = "Strażnik";
        else if (randomProf == 31) profesja = "Szczurołap";
        else if (randomProf >= 32 && randomProf <= 33) profesja = "Śledczy";
        else if (randomProf == 34) profesja = "Żebrak";
        else if (randomProf == 35) profesja = "Artystka";
        else if (randomProf >= 36 && randomProf <= 37) profesja = "Doradca";
        else if (randomProf >= 38 && randomProf <= 39) profesja = "Namiestnik";
        else if (randomProf >= 40 && randomProf <= 41) profesja = "Poseł";
        else if (randomProf == 42) profesja = "Służąca";
        else if (randomProf == 43) profesja = "Szlachcic";
        else if (randomProf == 44) profesja = "Szpieg";
        else if (randomProf == 45) profesja = "Zwadźca";
        else if (randomProf == 46) profesja = "Chłopka";
        else if (randomProf >= 47 && randomProf <= 51) profesja = "Górnik";
        else if (randomProf >= 52 && randomProf <= 53) profesja = "Łowczyni";
        else if (randomProf >= 54 && randomProf <= 55) profesja = "Zarządca";
        else if (randomProf == 56) profesja = "Zwiadowca";
        else if (randomProf >= 57 && randomProf <= 58) profesja = "Domokrążca";
        else if (randomProf >= 59 && randomProf <= 60) profesja = "Kuglarka";
        else if (randomProf >= 61 && randomProf <= 64) profesja = "Łowczyni Nagród";
        else if (randomProf >= 65 && randomProf <= 66) profesja = "Posłaniec";
        else if (randomProf == 67) profesja = "Woźnica";
        else if (randomProf >= 68 && randomProf <= 69) profesja = "Doker";
        else if (randomProf >= 70 && randomProf <= 71) profesja = "Flisak";
        else if (randomProf == 72) profesja = "Pilotka Rzeczna";
        else if (randomProf == 73) profesja = "Pirat Rzeczny";
        else if (randomProf >= 74 && randomProf <= 75) profesja = "Przemytniczka";
        else if (randomProf >= 76 && randomProf <= 77) profesja = "Przewoźnik";
        else if (randomProf == 78) profesja = "Żeglarz";
        else if (randomProf >= 79 && randomProf <= 81) profesja = "Banita";
        else if (randomProf == 82) profesja = "Hiena Cmentarna";
        else if (randomProf == 83) profesja = "Rekieterka";
        else if (randomProf == 83) profesja = "Złodziej";
        else if (randomProf >= 85 && randomProf <= 87) profesja = "Gladiator";
        else if (randomProf >= 88 && randomProf <= 90) profesja = "Ochroniarz";
        else if (randomProf >= 91 && randomProf <= 93) profesja = "Oprych";
        else if (randomProf >= 94 && randomProf <= 97) profesja = "Zabójca";
        else if (randomProf >= 98 && randomProf <= 100) profesja = "Żołnierz";
    }
    // Krasnolud
    else if (rasa == "Krasnolud") {
        if (randomProf == 1) profesja = "Aptekarka";
        else if (randomProf >= 2 && randomProf <= 4) profesja = "Inżynier";
    }

    std::cout << "Wylosowana profesja: " << profesja << std::endl;
    return 0;
}
