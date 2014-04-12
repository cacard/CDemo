/*
 * ProgramStack包含了众多Frame，每个方法或者block均有自己的Frame。线程有各自的ProgramStack
 *
 */


 void testProgramStack()
 {
    function1(1,2,3);
 }

 int function1(int a,int b,int c)
 {
     int w;
     int x;
     int y;

     printf("%p,%p,%p,%p,%p,%p",&a,&b,&c,&w,&x,&y);

     return 0;
 }
