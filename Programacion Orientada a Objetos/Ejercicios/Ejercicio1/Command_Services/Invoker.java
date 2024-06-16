package Ejercicio1.Command_Services;

import java.util.ArrayList;
import java.util.List;

public class Invoker {
    private List<Command> commandHistory= new ArrayList<>();

    public void executeCommand(Command command){
        command.execute();
        commandHistory.add(command);
    }
    public List<Command> getCommandHistory(){
        return commandHistory;
    }
}
