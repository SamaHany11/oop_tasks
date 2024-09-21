

import java.util.Scanner;

public class Mavenproject1 {

    static String movie;
    static String place1;
    static String ans;
    static int cost;
    static String snack1;

    public static void info() {

        Scanner in = new Scanner(System.in);
        System.out.println("Enter your name");
        String name = in.nextLine();
        System.out.println("Enter your mabile phone should be 11 number");
        String phone = in.nextLine();
        System.out.println("Enter your age");
        int age = in.nextInt();

    }

    public static void displaymovies() {
        String[] moviename = {"LUCA", "INSIDE OUT", "LION KING", "SOUL", "MOUSE"};
        int[] price = {120, 150, 200, 170, 210};
        System.out.println("these are the movies and prices in our cenima ");
        for (int i = 0; i < moviename.length; i++) {
               System.out.println(moviename[i] + ": " + price[i] + "$");
        }
        
    }

    public static void choseandplace() {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the movie that you want");
        movie = in.nextLine();
        String place[] = {"Right", "Left", "Front", "Last", "Middle"};
        System.out.println("Enter the place");
        for (int i = 0; i < place.length; i++) {
            System.out.print(place[i] + " ");
        }
       System.out.println();
        place1 = in.nextLine();
        String snack[] = {"pop corn(50$)", "cola(25$)", "water(10$)", "candy((100$)", "juice(25$)"};
        System.out.println("Do you want to take any snack ?");
        ans = in.nextLine();
        if (ans.equals("YES") || ans.equals("Yes" )|| ans.equals ("yes")) {
            System.out.println("what the stack you want");
            for (int i = 0; i < snack.length; i++) {
                System.out.print(snack[i] + " ");
            }
           System.out.println();
            snack1 = in.nextLine();
        } else {
            System.out.println("Okay I hope you enjoy ");
        }
    }

    public static void calrecpt() {
        Scanner in = new Scanner(System.in);

        System.out.println("what are number of tickets that you want ?");
        int n = in.nextInt();
        if (movie.equals("LUCA") ) {
            cost = 120 * n;
        } else if (movie.equals("INSIDE OUT")) {
            cost = 150 * n;
        } else if (movie.equals("LION KING")) {
            cost = 200 * n;
        } else if (movie.equals("SOUL")) {
            cost = 170 * n;
        } else {
            cost = 210 * n;
        }

        if (ans.equals("YES") || ans.equals("Yes" )|| ans.equals ("yes")) {
            System.out.println("what are number of snack that you want ?");
            n = in.nextInt();
        
        if (snack1.equals("pop corn(50$)")) {
            cost += n * 50;

        } else if (snack1.equals("cola(25$)")) {
            cost += n * 25;
        } else if (snack1.equals("water(10$)")) {
            cost += n * 10;
        } else if (snack1.equals("candy((100$)") ){
            cost += n * 100;
        } else {
            cost += n * 25;
        }
}
else{
    return;
}
    }

    public static void print() {
        System.out.println("Thank YOU");

        System.out.println("The movie: " + movie);
        System.out.println("Your place: " + place1);
       if (ans.equals("YES") || ans.equals("Yes" )|| ans.equals ("yes")) {
            System.out.println("Your snack: " + snack1);
        }
        System.out.println("Your total cost: " + cost);

    }

    public static void main(String[] args) {
        System.out.println("                                         Welcome to our cenima                                              ");
    info();
displaymovies();
choseandplace();
calrecpt ();
print();
    }
}
