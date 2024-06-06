package IteratorPart;
//clase tableriterator que implementa el patron iterator
public class TableroIterator implements Iterator{
    private Tablero tablero; // collection
    private int currentIndex;

    public TableroIterator(Tablero tablero){
        this.tablero = tablero;
    }

    @Override
    public boolean hasMore() {
        return currentIndex < tablero.getCasillas().size();
    }

    @Override
    public Casilla next(){
        if (hasMore()){
        Casilla casilla = tablero.getCasilla(currentIndex);
        currentIndex++;
        return casilla;
        }
        else return null;
    }

    @Override
    public void reset() {
        currentIndex = 0;
    }
}
