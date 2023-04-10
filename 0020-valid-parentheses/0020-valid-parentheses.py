class Solution:
    # def isValid(self, s: str) -> bool:
    def isValid(self, s: str) -> bool:
        parentheses = []
        for i in s:
            if i in '({[':
                parentheses.append(i)
            elif i in ')}]':
                if parentheses:
                    j = parentheses.pop()
                    if j+i not in '() {} []':
                        return False
                else:
                    return False
        return parentheses == []    