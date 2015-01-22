#include <stdio.h>

int main() {
    printf("\\r Возврат каретки (Carriage Return)\n");
    printf("\\t Табуляция (Horizontal Tab)\n");
    printf("\\a Предупреждение (Alarm)\n");
    printf("\\f Прогон страницы (Formfeed)\n");
    printf("\\v Вертикальная табуляция (Vertical Tab)\n");
    printf("\\b Удаление предыдущего символа (Backspace)\n");
    printf("\\n Новая строка (Newline)\n");
    printf("\\\\ Обратный слеш (Backslash)\n");
    printf("\\\' Одинарная кавычка (Single quote)\n");
    printf("\\\" Двойная кавычка (Double quote)\n");
    printf("\\\? Знак вопроса (Question mark)\n");
    printf("\\nnn Число, представленное в восьмиричной системе счисления (octal number)\n");
    printf("\\xhh Число, представленное в шестнадцатиричной системе счисления (hexadecimal number)\n");
}