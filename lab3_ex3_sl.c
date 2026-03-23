#include <stdio.h>

int main() {
    int inv_number;

    printf("Бібліотечний каталог:\n");
    printf("Введіть інвентарний номер книги (1-10): ");
    scanf("%d", &inv_number);

    printf("\nРезультат пошуку:\n");

    switch (inv_number) {
        case 1:
            printf("Назва: 'Кобзар'\nАвтор: Тарас Шевченко\n");
            break;
        case 2:
            printf("Назва: 'Тіні забутих предків'\nАвтор: Михайло Коцюбинський\n");
            break;
        case 3:
            printf("Назва: 'Маруся Чурай'\nАвтор: Ліна Костенко\n");
            break;
        case 4:
            printf("Назва: '1984'\nАвтор: Джордж Орвелл\n");
            break;
        case 5:
            printf("Назва: 'Гаррі Поттер'\nАвтор: Джоан Роулінг\n");
            break;
        case 6:
            printf("Назва: 'Маленький принц'\nАвтор: Антуан де Сент-Екзюпері\n");
            break;
        case 7:
            printf("Назва: 'Портрет Доріана Грея'\nАвтор: Оскар Уайльд\n");
            break;
        case 8:
            printf("Назва: 'Великий Гетсбі'\nАвтор: Френсіс Скотт Фіцджеральд\n");
            break;
        case 9:
            printf("Назва: 'Тигролови'\nАвтор: Іван Багряний\n");
            break;
        case 10:
            printf("Назва: 'Алхімік'\nАвтор: Пауло Коельйо\n");
            break;
        default:
            printf("Помилка: Книги з номером %d у каталозі не знайдено.\n", inv_number);
            break;
    }

    return 0;
}