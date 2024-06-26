package Ejercicio1_Biblioteca.Chain_Organizacion;

import Ejercicio1_Biblioteca.Factory_Material.Material;

abstract class Handler {
    protected Handler nextHandler; //habra un siguinete manejador

    public void setNextHandler(Handler nextHandler){
        this.nextHandler = nextHandler;
    }
    public void handlerRequest(Material material){
        process(material);
            if (nextHandler != null){
                nextHandler.handlerRequest(material); //evalua y mira si no esta vacio
            }
    }
    abstract protected void process(Material material);
}
