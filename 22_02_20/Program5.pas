// Четные строки - справа налево, нечетные - слева направо.

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
  
  writeln();
  
  for var i := 1 to rowSize do
  begin
    if i mod 2 = 0 then
    begin
      for var j := columnSize downto 1 do
      begin
        write(arr[i, j], ' ');
      end;
    end
    else 
    begin
      for var j := 1 to columnSize do
      begin
        write(arr[i, j], ' ');
      end;
    end;
    writeln();  
  end
end.