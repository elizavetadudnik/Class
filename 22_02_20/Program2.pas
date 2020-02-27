const
  rowSize = 7;
  columnSize = 7;

var
  arr: array[1..rowSize, 1..columnSize] of integer;
  
begin
  for var i := 1 to rowSize do
  begin
    for var j :=  1 to columnSize do
    begin
        arr[i, j] := 0;
    end;
  end;
  
  for var i := 1 to rowSize do
  begin
    arr[i, rowSize - i + 1] := i;
  end;
  
  for var i := 1 to rowSize do
  begin
    for var j :=  1 to columnSize do
    begin
        write(arr[i, j]);
    end;
    writeln();
  end;
  
  
  
  
end.