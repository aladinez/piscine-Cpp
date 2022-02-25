 // Shadowing

 #include <iostream>
 using namespace std;
 const int MNAME = 30;
 const int M  = 13;

 class Person {   // Base Class
     char person[MNAME+1];
   public:
     void set(const char* n);
     void display(ostream&) const;
   protected:
     const char* name() const;
 };

 void Person::set(const char* n) {
     strncpy(person, n, MNAME);
     person[MNAME] = '\0';
 }

 void Person::display(ostream& os) const {
     os << person << ' ';
 }

 const char* Person::name() const { return person; }

 class Student : public Person { // Derived
     int no;
     char grade[M+1];
   public:
     Student();
     Student(int, const char*);
     void display(ostream&) const;
 };

 Student::Student() {
     no = 0;
     grade[0] = '\0';
 }

 Student::Student(int n, const char* g) {
     // see p.61 for validation logic
     no = n;
     strcpy(grade, g);
 }

 void Student::display(ostream& os) const {
     os << name() << ' '
        << no <<  ' ' << grade << endl;
 }

 int main() {
     Person person;
     Student student(975, "ABBAD");

     student.set("Harry");
     student.display(cout); // Harry 975 ABBAD

     person.set("Jane Doe");
     person.display(cout); // Jane Doe
 }