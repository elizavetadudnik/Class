const 
  rowSize = 5;
  columnSize = 7;
  
var 
  arr: array[1..rowSize, 1..columnSize] of integer;
  
begin
  for var i := 1 to rowSize do
  begin
    if i mod 2 = 0 then
    begin
      for var j := 1 to columnSize do 
      begin
        arr[i, j] := j;
      end;
    end
    else 
    begin
      for var j := 2 to columnSize do
      begin
        arr[i, j] := -1 + j
      end;
      
      arr[i, 1] := columnSize;
    end;
  end;
  for var i := 1 to rowSize do
  begin
    for var j := 1 to columnSize do
    begin
      write(arr[i, j], ' ');
    end;
    writeln;
  end;
end.
  