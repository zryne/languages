package my.languages;

public class Main {

  public static void main(String[] args) {
    System.out.println("-----------------------------------");

    Circle c = new Circle();
    c.setRadius(2.5);
    System.out.println("Circle:");
    System.out.println("\tRadius = " + c.getRadius());
    System.out.println("\tDiameter = " + c.getDiameter());
    System.out.println("\tCircumference = " + c.getCircumference());
    System.out.println("\tArea = " + c.getArea());

    System.out.println("-----------------------------------");

    Sphere s = new Sphere();
    s.setRadius(4.1);
    System.out.println("Sphere:");
    System.out.println("\tRadius = " + s.getRadius());
    System.out.println("\tDiameter = " + s.getDiameter());
    System.out.println("\tCircumference = " + s.getCircumference());
    System.out.println("\tArea = " + s.getArea());
    System.out.println("\tVolume = " + s.getVolume());

    System.out.println("-----------------------------------");

    Ball b = new Ball();
    b.setRadius(5.5);
    b.setWeight(3.0);
    System.out.println("Ball:");
    System.out.println("\tRadius = " + b.getRadius());
    System.out.println("\tDiameter = " + b.getDiameter());
    System.out.println("\tCircumference = " + b.getCircumference());
    System.out.println("\tArea = " + b.getArea());
    System.out.println("\tVolume = " + b.getVolume());
    System.out.println("\tWeight = " + b.getWeight());

    System.out.println("-----------------------------------");
  }
}