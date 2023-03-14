class Piece:
    def __init__(self, color, position):
        self.color = color
        self.position = position

class Pawn(Piece):
    def __init__(self, color, position):
        super().__init__(color, position)

    def __str__(self):
        return 'P'

class Rook(Piece):
    def __init__(self, color, position):
        super().__init__(color, position)

    def __str__(self):
        return 'R'

class Knight(Piece):
    def __init__(self, color, position):
        super().__init__(color, position)

    def __str__(self):
        return 'N'

class Bishop(Piece):
    def __init__(self, color, position):
        super().__init__(color, position)

    def __str__(self):
        return 'B'

class Queen(Piece):
    def __init__(self, color, position):
        super().__init__(color, position)

    def __str__(self):
        return 'Q'

class King(Piece):
    def __init__(self, color, position):
        super().__init__(color, position)

    def __str__(self):
        return 'K'

class Chessboard:
    def __init__(self):
        self.board = [[None]*8 for _ in range(8)]
        self.create_pieces()

    def create_pieces(self):
        # create and place pawns
        for i in range(8):
            self.board[1][i] = Pawn('white', (1, i))
            self.board[6][i] = Pawn('black', (6, i))
        # create and place rooks
        self.board[0][0] = Rook('white', (0, 0))
        self.board[0][7] = Rook('white', (0, 7))
        self.board[7][0] = Rook('black', (7, 0))
        self.board[7][7] = Rook('black', (7, 7))
        # create and place knights
        self.board[0][1] = Knight('white', (0, 1))
        self.board[0][6] = Knight('white', (0, 6))
        self.board[7][1] = Knight('black', (7, 1))
        self.board[7][6] = Knight('black', (7, 6))
        # create and place bishops
        self.board[0][2] = Bishop('white', (0, 2))
        self.board[0][5] = Bishop('white', (0, 5))
        self.board[7][2] = Bishop('black', (7, 2))
        self.board[7][5] = Bishop('black', (7, 5))
        # create and place queens
        self.board[0][3] = Queen('white', (0, 3))
        self.board[7][3] = Queen('black', (7, 3))
        # create and place kings
        self.board[0][4] = King('white', (0, 4))
        self.board[7][4] = King('black', (7, 4))

    def print_board(self):
        for i in range(8):
            for j in range(8):
                if self.board[i][j]:
                    print(str(self.board[i][j]), end=' ')
                else:
                    print('.', end=' ')
            print()

# example usage
board = Chessboard()
board.print_board()
