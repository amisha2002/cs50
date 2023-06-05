from pyfiglet import Figlet
import sys
figlet = Figlet()
f = figlet.getFonts()
if len(sys.argv)==1 :
    i = input("Input:")

    random(figlet.getFonts())
    print(figlet.renderText(i))
elif len(sys.argv)==3 :
    if sys.argv[1] in ["-f","--font"] and sys.argv[2] in f:
        i = input("Input:")
        figlet = Figlet()
        figlet.getFonts()
        figlet.setFont(font=sys.argv[2])
        print(figlet.renderText(i))
    else:
        sys.exit('Invalid Usage');
else:
    sys.exit('Invalid Usage');