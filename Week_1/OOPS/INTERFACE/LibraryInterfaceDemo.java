public class LibraryInterfaceDemo
{
    public static void main(String[] args)
    {
        System.out.println("Test Case 1: Kid User\n");

        KidUser kid = new KidUser();

        kid.age = 10;
        kid.registerAccount();
        kid.bookType = "Kids";
        kid.requestBook();

        System.out.println();

        kid.age = 18;
        kid.registerAccount();
        kid.bookType = "Fiction";
        kid.requestBook();

        System.out.println("\n");

        System.out.println("Test Case 2: Adult User\n");

        AdultUser adult = new AdultUser();

        adult.age = 5;
        adult.registerAccount();
        adult.bookType = "Kids";
        adult.requestBook();

        System.out.println();

        adult.age = 23;
        adult.registerAccount();
        adult.bookType = "Fiction";
        adult.requestBook();    
    }
}