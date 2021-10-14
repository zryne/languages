package my.languages;

public class Circle {
  private double radius;
  
  public Circle() {
    System.out.println("[Create CIRCLE]");
  }
  
  public Circle(double r) {
    radius = r;
  }
  
  public void setRadius(double r) {
    System.out.println("--> Setting radius for CIRCLE");
    radius = r;
  }
  
  public double getRadius() {
    return radius;
  }
  
  public double getDiameter() {
      return (2.0 * radius);
  }

  public double getCircumference() {
      return (2.0 * Math.PI * radius);
  }

  public double getArea() {
      return (Math.PI * Math.pow(radius, 2.0));
  }
}
