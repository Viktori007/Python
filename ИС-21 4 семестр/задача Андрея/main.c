/** С использованием struct + файлы*/
/** Гусятинер Л.Б. 13.02.2023 КМПО РАНХиГС */
#include <stdio.h>
#include <string.h>
int main() {


    FILE *file;
    struct students {
        char name[100];
        int year;
    };
    struct students st[100]; //если будет выделено меньше,
    //чем есть строк файле,то не учтет их при компиляции
    char i=0, s[100];
    int year = -1;
    scanf("%s", s);


    file = fopen("stud.txt", "r");
    while (fscanf(file, "%s%d",
        st[i].name, &(st[i].year)) != EOF) {
    int len = sizeof(st) / sizeof(st[0]);
    for (int i = 0; i < len; ++i) {
        if (strcmp(st[i].name, s) == 0) {
            year = st[i].year;
            break;
        }
    }
        i++;
    }
      fclose(file);
   if (year == -1)
        printf("not in group\n");
    else {
        switch (year % 12) {
        case 0:
            printf("обезьяна\n\n");
            break;
        case 1:
            printf("Петух\n\n");
            break;
        case 2:
            printf("собака\n\n");
            break;
        case 3:
            printf("свинья\n\n");
            break;
        case 4:
            printf("крыса\n\n");
            break;
        case 5:
            printf("бык\n\n");
            break;
        case 6:
            printf("тигр\n\n");
            break;
        case 7:
            printf("кролик\n\n");
            break;
        case 8:
            printf("дракон\n\n");
            break;
        case 9:
            printf("змея\n\n");
            break;
        case 10:
            printf("лошадь\n\n");
            break;
        case 11:
            printf("коза\n\n");
            break;
        default:
            printf("Error\n\n");
            break;
        }
    }
    return 0;
}
