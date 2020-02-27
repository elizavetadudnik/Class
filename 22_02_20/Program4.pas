const
  rowSize = 4;
  columnSize = 5;

var
  arr: array[1..rowSize, 1..columnSize] of integer;
  min, max, temp, indexMin, indexMax: integer;
  
begin
  for var i := 1 to rowSize do
  begin
    for var j :=  1 to columnSize do
    begin
        arr[i, j] := random(0, 9);
    end;
  end;
  
  for var i := 1 to rowSize do
  begin
    for var j := 1 to columnSize do
    begin
        write(arr[i, j], ' ');
    end;
    writeln();
  end; 
  
  min := Integer.MaxValue;
  max := Integer.MinValue;
  
  for var i := 1 to rowSize do
  begin
    for var j := 1 to columnSize do
    begin
      if arr[i, j] < min then
      begin
        min := arr[i, j];
        indexMin := j;
      end;
        
      if arr[i, j] > max then
      begin
        max := arr[i, j];
        indexMax := j;
      end;        
    end;
    
    temp := arr[i, 1];
    arr[i, 1] := max;
    arr[i, indexMax] := temp;
      
    temp := arr[i, columnSize];
    arr[i, columnSize] := min;
    arr[i, indexMin] := temp;  
  end;
  
  writeln();
  
  for var i := 1 to rowSize do
  begin
    for var j := 1 to columnSize do
    begin
        write(arr[i, j], ' ');
    end;
    writeln();
  end; 
end.