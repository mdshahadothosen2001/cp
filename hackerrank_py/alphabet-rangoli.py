def print_rangoli(size):
    
    matrix_row = (size*2) - 1
    matrix_column = (size*2)+(size*2)-3
    mid_column = int(matrix_column/2)
    mid_row = int(matrix_row/2)

    alphabet = ['a','b','c','d','e','f','g','h','i', 'j', 'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

    if 0<size and size < 27:
        
        """This loop for hear 1st matrix up to mid-1 where matrix_row divided by 2""" 
        
        alphabet_series = 0
        for row in range(size-1,0,-1):
            
            alphabet_index = size-1
            for column in range(matrix_column):
                if mid_column-alphabet_series <= column and column < mid_column:
                    test = int((column+1)%2)
                    if test == 1:
                        print(alphabet[alphabet_index], end='')
                        alphabet_index = alphabet_index-1
                        
                    elif test == 0:
                        print('-', end='')
                elif column == mid_column:
                    print(alphabet[alphabet_index], end='')
                    alphabet_index = alphabet_index+1
                elif mid_column+1 <= column and column <= mid_column+alphabet_series:
                    test = int((column+1)%2)
                    if test == 1:
                        print(alphabet[alphabet_index], end='')
                        alphabet_index = alphabet_index+1
                    elif test == 0:
                        print('-', end='')
                else:
                    print('-', end='')
            alphabet_series = alphabet_series+2
            print(end='\n')
        
            
        """This loop for mid matrix"""
        
        alphabet_index = size-1
        row = mid_row
        for column in range(matrix_column):
            if column < mid_column:
                test = int((column+1)%2)
                if test == 1:
                    print(alphabet[alphabet_index], end='')
                    alphabet_index = alphabet_index-1
                    
                elif test == 0:
                    print('-', end='')
            elif column == mid_column:
                print(alphabet[alphabet_index], end='')
                alphabet_index = alphabet_index+1
            elif column >= mid_column:
                test = int((column+1)%2)
                if test == 1:
                    print(alphabet[alphabet_index], end='')
                    alphabet_index = alphabet_index+1
                elif test == 0:
                    print('-', end='')
                    
        print(end='\n')
        
        
        """This loop for bottom 1st matrix start from mid+1 where matrix_row divided by 2"""
        
        alphabet_series = alphabet_series -2
        alphabet_index = size-1
        for row in range(mid_row+1,matrix_row,1):
            for column in range(matrix_column):
                if mid_column-alphabet_series <= column and column < mid_column:
                    test = int((column+1)%2)
                    if test == 1:
                        print(alphabet[alphabet_index], end='')
                        alphabet_index = alphabet_index-1
                        
                    elif test == 0:
                        print('-', end='')
                elif column == mid_column:
                    print(alphabet[alphabet_index], end='')
                elif mid_column+1 <= column and column <= mid_column+alphabet_series:
                    test = int((column+1)%2)
                    if test == 1:
                        alphabet_index = alphabet_index+1
                        print(alphabet[alphabet_index], end='')
                        
                    elif test == 0:
                        print('-', end='')
                else:
                    print('-', end='')
            alphabet_series = alphabet_series-2
            print(end='\n')



if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)