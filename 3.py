
class Solution:
    def luckyNumbers(self, matrix: List[List[int]]) -> List[int]:
        columns = []
        col_size = len(matrix[0])
        row_size = len(matrix)
        
        row_min = set([min(row) for row in matrix])


        for i in range(col_size):
            columns.append(max([matrix[j][i] for j in range(row_size)]))
        return [x for x in columns if x in row_min]
