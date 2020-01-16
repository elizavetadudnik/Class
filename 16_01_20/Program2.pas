// Массив с клавы. Вывести элементы, кратные 5, стоящие на нечетных местах.

var 
  arr: array [1..10] of integer;
  
begin
  for var i := 1 to 10 do
  begin
    readln(arr[i]);
    if (arr[i] mod 5 = 0) and (i mod 2 = 1) then
      writeln(arr[i]);
  end;
end.