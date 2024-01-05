balacnce = 3000
def buy_thing(item, price):
    # Local scope variable, amra caile global variable use korte parbo 
    global balacnce
    balacnce= balacnce-200
    print(f'Balance in the function:', balacnce )
 
buy_thing('Sunglass', balacnce)
