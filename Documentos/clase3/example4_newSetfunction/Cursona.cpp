#include <iostream>
using namespace std; 

#include "Cursoname.h" 

LibroCalificar::LibroCalificar( string name )
{
   setCourseName( name ); 
} 

// función que establece el nombre del curso;
// asegura que el nombre del curso tiene como máximo 25 caracteres
void LibroCalificar::setCourseName( string name )
{
   if ( name.length() <= 25 ) //si el nombre tiene 25 caracteres o menos
      courseName = name; // guarde el nombre del curso en el objeto

   if ( name.length() > 25 ) // Si el nombre tiene más de 25 caracteres.
   { 
      // establece courseName en los primeros 25 caracteres del nombre del parámetro
      courseName = name.substr( 0, 25 ); // empieza en 0, longitud de 25

      cout << "Nombre \"" << name << "\" excede la longitud máxima (25).\n"
         << "Limitando el nombre del curso a los primeros 25 caracteres.\n" << endl;
   } 
} 

string LibroCalificar::getCourseName()
{
   return courseName;
} 

void LibroCalificar::displayMessage()
{
   cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() 
      << "!" << endl;
} 

