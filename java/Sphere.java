package my.languages;

public class Sphere extends Circle {
  private double radius;
  
  public Sphere() {
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
      return (4.0 * Math.PI * Math.pow(radius, 2.0));
  }
  
  public double getVolume() {
    return (4.0/3.0 * Math.PI * Math.pow(radius, 3.0));
  }
}
