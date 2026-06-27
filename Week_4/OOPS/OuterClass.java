public class OuterClass {

    public void display() {
        System.out.println("Display method of Outer Class");
    }

    class Inner {

        public void display() {
            System.out.println("Display method of Inner Class");
        }
    }

    public static void main(String[] args) {

        OuterClass outer = new OuterClass();
        outer.display();

        OuterClass.Inner inner = outer.new Inner();
        inner.display();
    }
}