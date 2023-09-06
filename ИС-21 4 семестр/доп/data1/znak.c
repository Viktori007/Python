void znak_zodiaka(int den,int mes){
    if ((mes==3 && den>20 && den<31)||(mes==4 && den>0 && den<22)) printf("The Ram\n");//овен
    if ((mes==4 && den>20 && den<30)||(mes==5 && den>0 && den<22)) printf("The Bull\n");//телец
    if ((mes==5 && den>21 && den<31)||(mes==6 && den>0 && den<22)) printf("The Twins\n");//близнецы
    if ((mes==6 && den>21 && den<30)||(mes==7 && den>0 && den<23)) printf("The Crab\n");//рак
    if ((mes==7 && den>22 && den<31)||(mes==8 && den>0 && den<23)) printf("The Lion\n");//лев
    if ((mes==8 && den>21 && den<31)||(mes==9 && den>0 && den<24)) printf("The Maiden\n");//дева
    if ((mes==9 && den>23 && den<30)||(mes==10 && den>0 && den<24)) printf("The Scales\n");//весы
    if ((mes==10 && den>23 && den<31)||(mes==11 && den>0 && den<23)) printf("The Scorpion\n");//скорпион
    if ((mes==11 && den>22 && den<30)||(mes==12 && den>0 && den<23)) printf("The Centaur\n");//стрелец
    if ((mes==12 && den>22 && den<31)||(mes==1 && den>0 && den<21)) printf("The Sea-Goat\n");//козерог
    if ((mes==1 && den>20 && den<31)||(mes==2 && den>0 && den<20)) printf("The Water-Bearer\n");//водолей
    if ((mes==2 && den>19 && den<29)||(mes==3 && den>0 && den<21)) printf("The Fishes\n");//рыбы
}
