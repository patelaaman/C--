import java.beans.Statement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;

class first{
    public static void main(String args[])
       throws ClassNotFoundException,SQLException  {
      Class.forName("com.mysql.jdbc.Driver");
      Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/apnacollage", "aman","1234");

      String sql = "Select * from student";
      Statement re  = con.createStatement();
      int i = ExecuteUpdate(sql);
      if(i>0)
         System.out.println("Data inserted;;;;");

         con.close();
       
        
       }
}