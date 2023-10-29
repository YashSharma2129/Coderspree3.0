def generate(n,open,close,current,result):
    if(len(current)==2*n):
        result.append(current)
        return
    if(open<n):
        generate(n,open+1,close,current +"(",result)
    if(close<open):
        generate(n,open,close+1,current+")",result)        




def validParenthesis(n: int) -> int:
    result=[]
    generate(n,0,0,"",result)
    return result