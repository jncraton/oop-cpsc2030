""" 
Solution to the four fours puzzle

https://en.wikipedia.org/wiki/Four_fours
"""

def eval_rpn(expr):
    stack = []

    for item in expr:
        if isinstance(item, (int, float)):
            stack.append(item)
        elif item == "+":
            stack[-2:] = [stack[-2] + stack[-1]]
        elif item == "-":
            stack[-2:] = [stack[-2] - stack[-1]]
        elif item == "*":
            stack[-2:] = [stack[-2] * stack[-1]]
        elif item == "/":
            stack[-2:] = [stack[-2] / stack[-1]]
        elif item == "√":
            stack[-1] = stack[-1] ** .5

    return stack[0]
    
assert(eval_rpn([1, 1, "+"]) == 2)
assert(eval_rpn([2, 1, "-"]) == 1)
assert(eval_rpn([2, 4, "*"]) == 8)
assert(eval_rpn([4, 2, "/"]) == 2)
assert(eval_rpn([4, "√"]) == 2)
assert(eval_rpn([4, 4, "+", 4, 4, "/", "-"]))
assert(eval_rpn([2, 1, "+", 8, "*"]) == 24)

def dfs(target, expr=[4]):
    try:
        if eval_rpn(expr) == target:
            return expr
    except IndexError:
        return None
    except ZeroDivisionError:
        return None
    
    # Break out of this path if too many 4s
    if expr.count(4) > 4 or expr.count("√") > 4:
        return None
    
    for op in [4] + list("+-*/√"):
        res = dfs(target, expr + [op])
        if res:
            return res

for i in range(11):
    print(i, dfs(i))
