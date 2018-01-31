Unit math_personal;

type
  math_func = function (x: real): real;

Function MathCalc(a:real;b:real;action:char):real;
begin
  case action of
    '+': result:=a+b;
    '-': result:=a-b;
    '*': result:=a*b;
    '/': result:=a/b;
  end;
end;

Function FuncCalc(a:real;func:string):real;
var  
  f:math_func;
begin
  var math_funcs:= new Dictionary<string,math_func>;
  math_funcs.Add('sqr',sqr);
  math_funcs.Add('sqrt',sqrt);
  math_funcs.Add('sin',sin);
  math_funcs.Add('cos',cos);
  math_funcs.Add('tan',tan);
  result:=math_funcs.Get(func)(a);
end;

end.
