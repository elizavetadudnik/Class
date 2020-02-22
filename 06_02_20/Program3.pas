// Поменять местами эл-ты, стоящие на четных местах с соседними эл-тами, стоящими на нечетных местах.

const
  size = 6;
  
var
  arr: array[1..size] of integer;
  first: integer;
  
begin
  for var i := 1 to size do
    readln(arr[i]);
    
  writeln(arr);
  for var i := 1 to size - 1 do
  begin
    if i mod 2 <> 0 then
    begin
      first := arr[i];
      arr[i] := arr[i + 1];
      arr[i + 1] := first;
    end;
  end;
  writeln(arr);
end.