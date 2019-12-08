// Школьное 1

var
  number: integer;
  
begin
  readln(number);
  
  for var i := 1 to number do
  begin
    for var j := 1 to i do
    begin
      write('*');
    end;
    writeln();
  end;
end.