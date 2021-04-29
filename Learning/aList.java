package a.folder;

import java.util.ArrayList;
import java.util.List;

public class aList {
  public static void main(String[ args]) {
    List<Users> users = new ArrayList<>();
    int i = 0;
    while (i < 5) {
      Teacher game new Users("Name: " + i);
      Users.add(game);
      i++;
    }
    System.out.println(users.get(0).getFirstName());
    System.out.println(users.get(0).getLastName());
  }
}