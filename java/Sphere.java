package my.languages;

public class Sphere extends Circle {
  private double radius;
  
  public Sphere() {
    System.out.println("[Create SPHERE]");
  }
  
  public Sphere(double r) {
    radius = r;
  }
  
  public void setRadius(double r) {
    System.out.println("--> Setting radius for SPHERE");
    radius = r;
  }
  
  public double getRadius() {
    return radius;
  }
  
  public double getDiameter() {
      return (2 * radius);
  }

  public double getCircumference() {
      return (2 * Math.PI * radius);
  }

  public double getArea() {
      return (Math.PI * Math.pow(radius, 2.0));
  }
  
  public double getVolume() {
    return (4.0/3.0 * Math.PI * Math.pow(radius, 3.0));
  }
}
