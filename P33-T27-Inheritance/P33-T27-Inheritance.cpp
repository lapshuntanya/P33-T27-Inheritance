#include "Lesson.h"
#include "PaidLesson.h"

int main()
{
    Lesson a;
    Lesson b("Database", "SQL", "select query");

    a.showInfo();
    b.showInfo();

    cout << "\n+++++++++++++++++++++++++++++\n";
    cout << "+++++++++++++++++++++++++++++\n";
    cout << "+++++++++++++++++++++++++++++\n\n";

    PaidLesson c;
    PaidLesson d("C#", "Loops", "operators for, while", 199.99);

    c.showInfo();
    d.showInfo();
}

