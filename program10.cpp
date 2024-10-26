//write a program on tail recursion

unsigned int f( unsigned int a ) {
   if ( a == 0 ) {
      return a;
   }
   return f( a - 1 );   // tail recursion
}