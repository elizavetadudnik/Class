// Массив заполнен случайными числами от -5 до 5. Найти и вывести на экран кол-во эл-тов, кратных 9.

const 
  size = 18;

var
  arr: array[1..size] of integer;
  count: integer;
  
begin
  count := 0;

  for var i := 1 to size do
  begin
    arr[i] := random(-5, 5);
    
    if arr[i] mod 9 = 0 then   
      count += 1;
  end;
  
  writeln(count)
end.