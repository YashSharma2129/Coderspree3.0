def validParenthesis(n: int) -> int:
    output = []

    def rec(l,r,st,co):
        if l==r==0:
            output.append(co)
            return
        if l > 0:
            rec(l-1,r,st+1,co+"(")
        if r>0 and st>0:
            rec(l,r-1,st-1,co+")")

    rec(n,n,0,"")

    return output