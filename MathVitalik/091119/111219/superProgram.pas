var
  n, x, a0, an, ten: integer;

begin
  read(n);
  x := n;
  ten := 1;
  a0 := n mod 10;
  while n <> 0 do
  begin
    an := n mod 10;
    n := n div 10;
    ten *= 10;
  end;
  ten := ten div 10;
  x := x + (a0 - an) * ten + (an - a0);
  write(x);
end.