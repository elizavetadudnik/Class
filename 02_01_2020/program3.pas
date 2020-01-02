// Дано целое число N и набор из N целых чисел, содержащий по крайней мере два нуля. Вывести сумму чисел из данного набора, расположенных между 
// последними двумя нулями (если последние нули идут подряд,то вывести 0). 

var 
  N, number, sum, sumOld: integer;
  
begin
  sum := 0;
  sumOld := 0;
  readln(N);
  
  for var i := 1 to N do
  begin
    readln(number);
    if (number = 0) and (i <> N) then
    begin
      sumOld := sum;
      sum := 0;
    end;
    sum += number;    
  end;
  
  if number <> 0 then
    writeln(sumOld)
  else
    writeln(sum);  
end.
