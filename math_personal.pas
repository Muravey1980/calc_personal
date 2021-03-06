Unit math_personal;

type
  math_func = function (x: real): real;

Function MathCalc(a:real;b:real;action:string):real;
begin
  case action of
    string('+'): result:=a+b;
    string('-'): result:=a-b;
    string('*'): result:=a*b;
    string('/'): result:=a/b;
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
  if (func='sin') or (func='cos') or (func='tan') then a:=DegToRad(a);
  result:=math_funcs.Get(func)(a);
end;

end.
