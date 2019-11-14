//1) Даны два целых числа A и B (A < B). Вывести в порядке возрастания все целые числа, 
//расположенные между A и B (включая сами числа A и B),  а также количество N этих чисел.

var 
  A, B, N: INTEGER;
begin
  readln(A, B);
  if A < B then 
  
  begin 
    for var i := A to B do 
    write(i, '; ');
    N := B - A + 1;
    writeln( 'N=', N);
  end
  
  else 
  writeln('числа не удовлетворяют условию');
end.

