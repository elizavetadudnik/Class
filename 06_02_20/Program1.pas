// Циклический сдвиг массива влево на 1.


const
  size = 6;
  
var
  arr: array[1..size] of integer;
  firstElement: integer;
  
begin
  for var i := 1 to size do
  begin
    readln(arr[i]);
  end;
  
  writeln(arr);
  
  firstElement := arr[1];
  
  for var i := 1 to size - 1 do
  begin
    arr[i] := arr[i + 1];
  end;
  
  arr[size] := firstElement;
  
  writeln(arr);
end.