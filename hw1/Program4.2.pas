//Дано трехзначное число. Найти сумму и произведение его цифр.

var 
  number, a, b, c,sum, pr: integer;
begin

  writeln('Введите целое число');
  readln(number);
  a := number mod 10; // а - количество единиц 
  b := number div 10 mod 10;// b - количество десятков
  c := number div 100; //с - количество cотен
  sum := (a + b + c);
  pr := a*b*c; //pr - произведение цифр
writeln(sum,' ', pr);
end.