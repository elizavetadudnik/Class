// сортировка выбором по убыванию

const
  size = 10;
  
var
  arr: array[1..size] of integer;
  indexMax, temp, max: integer;

begin
  for var i := 1 to size do
  begin
    arr[i] := random(-9, 9);
  end;
  
  writeln(arr);
  
  max := Integer.MinValue; // сюда записали минимальное значение типа интеджер
  indexMax := 0;
  temp := 0;
  
  for var i := 1 to size do
  begin
    for var j := i to size do
    begin
      if arr[j] > max then
      begin
        max := arr[j];
        indexMax := j;
      end;
    end;
    
    // поменяли значения местами
    temp := arr[i];
    arr[i] := max;
    arr[indexMax] := temp;
    
    max := Integer.MinValue;   
  end;
  
  writeln(arr);
end.