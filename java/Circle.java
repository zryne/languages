package my.languages;

public class Circle {
  private double radius;
  
  public Circle() {
    radius = 0;
  }
  
  public void setRadius(double r) {
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

