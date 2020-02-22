// Циклический сдвиг массива влево на 2.

const
  size = 7;
  
var
  arr: array[1..size] of integer;
  first, second: integer;
  
begin
  for var i := 1 to size do
    readln(arr[i]);
    
  writeln(arr);
  first := arr[1];
  second := arr[2];
  for var i := 1 to size - 2 do
    arr[i] := arr[i + 2]; 
  
  arr[size - 1] := first;
  arr[size] := second;
  writeln(arr);
end.

  