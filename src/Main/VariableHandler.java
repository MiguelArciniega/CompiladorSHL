package Main;

import java.util.*;

public class VariableHandler {
    private static final ArrayList<String> variables = new ArrayList<>();

    public static ArrayList<String> getVariables() {
        return variables;
    }

    public static void addVariable(String variable) {
       variables.add(variable);
    }
    
    public static boolean verify(String variable){
       return variables.contains(variable);
    }
    
    public static boolean clean(){
       return variables.removeAll(variables);
    }
}
