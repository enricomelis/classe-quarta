# la funzione __init__ è il costruttore
# il parametro self è necessario per riferirsi alla classe
# il parametro position diventerà una matrice
# la funzione super() serve per l'ereditarietà, richiama il costruttore della classe madre
# il ritorno di ogni sottoclasse fa riferimento alla notazione internazionale
# la funzione __str__ è la get();
# la scacchiera viene generata come una matrice vuota
# nell'output della scacchiera il end=' ' serve a non andare a capo e mettere uno spazio dopo ogni pezzo di una riga

class Piece:
    def __init__(self, color, position): # __init__ = costruttore | self = riferimento alla classe
        self.color = color
        self.position = position # due valori, righe e colonne della scacchiera

class Pawn(Piece):
    def __init__(self, color, position):
        super().__init__(color, position) #super() richiama il costruttore della classe madre per ereditare 

    def __str__(self): # __str__() = get();
        return 'P' # serve per la stampa della scacchiera, fa riferimento alla notazione internazionale

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

class Scacchiera:
    def __init__(self):
        self.board = [[None]*8 for _ in range(8)] # [None]*8 genera un riga vuota, il ciclo for crea le colonne
        self.crea_pezzi() # inizializzazione dei pezzi al momento della creazione

# in python è possibile chiamare una funzione che è stata dichiarata successimente, 
# dato che l'interprete legge per prima cosa tutte le definizioni di funzione

    def crea_pezzi(self):
        # creazione pedone
        for i in range(8):
            self.board[1][i] = Pawn('white', (1, i)) # (1, i) sono i parametri della matrice position
            self.board[6][i] = Pawn('black', (6, i))
        # creazione torri
        self.board[0][0] = Rook('white', (0, 0))
        self.board[0][7] = Rook('white', (0, 7))
        self.board[7][0] = Rook('black', (7, 0))
        self.board[7][7] = Rook('black', (7, 7))
        # creazione cavalli
        self.board[0][1] = Knight('white', (0, 1))
        self.board[0][6] = Knight('white', (0, 6))
        self.board[7][1] = Knight('black', (7, 1))
        self.board[7][6] = Knight('black', (7, 6))
        # creazione alfieri
        self.board[0][2] = Bishop('white', (0, 2))
        self.board[0][5] = Bishop('white', (0, 5))
        self.board[7][2] = Bishop('black', (7, 2))
        self.board[7][5] = Bishop('black', (7, 5))
        # creazione regine
        self.board[0][3] = Queen('white', (0, 3))
        self.board[7][3] = Queen('black', (7, 3))
        # creazione re
        self.board[0][4] = King('white', (0, 4))
        self.board[7][4] = King('black', (7, 4))
        

    def print_board(self):
        for i in range(8):
            for j in range(8):
                if self.board[i][j]:
                    print(str(self.board[i][j]), end=' ') # permette di stampare ogni riga correttamente e avere gli spazi fra i pezzi
                else:
                    print('.', end=' ') # i . sono le caselle vuote all'inizio
            print()

board = Scacchiera()
board.print_board()
