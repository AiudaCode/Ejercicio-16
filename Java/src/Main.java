
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Pasar (Instanciaciación)
        Pasar obj = new Pasar(); 
        int n1, n2;//Se definen las variables n1 y n2 de tipo entero

        //Se le pide al usuario que digite el valor de "A" y se guarda en la variable n1.
        n1 = Integer.parseInt(JOptionPane.showInputDialog("Digite el valor de A"));
        //Se encapsula la variable n1.
        obj.setA(n1);

        //Se le pide al usuario que digite el valor de "B" y se guarda en la variable n2.
        n2 = Integer.parseInt(JOptionPane.showInputDialog("Digite el valor de B"));
        //Se encapsula la variable n2.
        obj.setB(n2);

        //Se llama al metodo "pasarNumero()".
        obj.pasarNumero();
        //Se muestran los valores cambiados.
        JOptionPane.showMessageDialog(null, "El nuevo valor de A es: " + obj.getA());
        JOptionPane.showMessageDialog(null, "El nuevo valor de B es: " + obj.getB());
    }
}
