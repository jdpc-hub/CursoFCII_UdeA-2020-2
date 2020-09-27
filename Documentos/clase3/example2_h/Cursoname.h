// Definición de la clase LibroCalificar en un archivo separado de main
#include <iostream> 
#include <string> 

using namespace std;

class LibroCalificar
{
public:
   LibroCalificar( string name )
   {
      setCourseName( name ); 
   } 

   
   void setCourseName( string name )
   {      
      courseName = name;
   } 
   
   
   string getCourseName() 
   {
      return courseName;
   } 

   void displayMessage()
   {
     cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() << "!" 
         << endl;
   } 
private:
   string courseName;
}; 
