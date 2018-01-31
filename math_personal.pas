Unit math_personal;

Function MathCalc(a:real;b:real;action:char):real;
begin
  case action of
    '+': result:=a+b;
    '-': result:=a-b;
    '*': result:=a*b;
    '/': result:=a/b;
  end;
end;
end.
