const 
  rowSize = 3;
  columnSize = 7;
  
var 
  arr: array[1..rowSize, 1..columnSize] of integer;
  max, currentMax: integer;
  incSeq, decSeq: boolean;
  
begin
  for var i := 1 to rowSize do
  begin
    for var j := 1 to columnSize do
    begin
      arr[i, j] := random(0, 9);
    end;
  end;
    
  for var i := 1 to rowSize do
  begin
    for var j := 1 to columnSize do
    begin
      write(arr[i, j], '  ');
    end;
    writeln();
  end;
  
  max := 0;
  currentMax := 0;
  incSeq := true;
  decSeq := true;
  
  for var i := 1 to columnSize do
  begin
    for var j := 2 to rowSize do
    begin
      if arr[j, i] <= arr[j - 1, i] then
      begin
        incSeq := false;
        break;
      end;
    end; 
    // 9 8 7
    for var j := 2 to rowSize do  
    begin
      if arr[j, i] >= arr[j - 1, i] then
      begin
        decSeq := false;
        break;
      end;
    end;
    for var j := 1 to rowSize do
    begin
      if arr[j, i] > currentMax then
        currentMax := arr[j, i];
    end;
    if incSeq or decSeq then
    begin
      if currentMax > max then
        max := currentMax;
    end;
    
    incSeq := true;
    decSeq := true;
    currentMax := 0;
  end;
  writeln(max)
end.