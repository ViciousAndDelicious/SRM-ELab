a = float(input())
b = float(input())
p = pow(b,0.16)
wcl=13.12+(0.6215*a)-(11.37*p)+(0.3965*a*p)
print("Windchill is", round(wcl, 2));
