//Дано трехзначное число. Вывести число, полученное при прочтении исходного числа справа налево. 

var 
  number1, number2, a, b, c : integer;
begin

  writeln('Введите целое число');
  readln(number1);
  a := number1 mod 10; // а - количество единиц 
  b := number1 div 10 mod 10;// b - количество десятков
  c := number1 div 100; //с - количество сотен
  number2 := a*100 + b*10 + c;
  writeln(number2);
end.