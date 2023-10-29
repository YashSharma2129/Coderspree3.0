from typing import List

def generateFibonacciNumbers(n: int) -> List[int]: 
    if n <= 0:
      return [0]
    elif n ==1:
        return[0]
    sequence = [0, 1]
    while len(sequence) <= n-1:
      next_value = sequence[len(sequence) - 1] + sequence[len(sequence) - 2]
      sequence.append(next_value)
    return sequence