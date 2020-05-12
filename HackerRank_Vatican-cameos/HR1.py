for _ in range(int(input())):
    s = input()
    if(s == 'Lastrade'):
        pname = 'Dolphin'
        att = str(3)+" granades thrown"
    elif(s == 'Watson'):
        pname = 'Mermaid'
        att = str(2)+" granades thrown"
    elif(s == 'Sherlock'):
        pname = 'Eel'
        att = "Open Fire"
    elif(s == 'AnyTwo'):
        pname = 'Shark'
        att = "Governer jump of the window"
    elif(s == 'All'):
        pname = 'Octopus'
        att = "Governer shoot hinself"
    elif(s == 'None'):
        pname = 'Jelly Fish'
        att = 'Achieved Victory'
    print("Plan "+pname+", "+att)
