def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

def car(pair):
    return pair(lambda a, b: a) #slice from b upto but not including a

def cdr(pair):
    return pair(lambda a, b: b)