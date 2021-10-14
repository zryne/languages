package my.languages;

public class Ball extends Sphere {
  private double radius;
  private double weight;
  
  public Ball() {
    System.out.println("[Create BALL]");
  }
  
  public Ball(double r, double w) {
    radius = r;
    weight = w;
  }
  
  public void setRadius(double r) {
    System.out.println("--> Setting radius for BALL");
    radius = r;
  }
  
  public void setWeight(double w) {
      weight = w;
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
  
  public double getWeight() {
    return weight;
  }
}
