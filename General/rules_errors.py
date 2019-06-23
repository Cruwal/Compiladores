import numpy as np

print("Type the rule:")
rule = input()
rule = (rule.split(' '))

print("Type the error id:")
id = int(input())


for i in range(len(rule)):
    output = "| "
    rule.insert(i, "error")
    for j in range(len(rule)):
        if(j != i +1):
            output = output + rule[j] + " "
    output = output + '{yyerror("ERROR ' + str(id) + '");}'
    rule.remove("error")
    id += 1
    print(output)