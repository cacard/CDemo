/*
 * ProgramStack�������ڶ�Frame��ÿ����������block�����Լ���Frame���߳��и��Ե�ProgramStack
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
