package my.languages;

public class Ball extends Sphere {
  private double radius;
  private double weight;
  
  public Ball() {
    radius = 0;
  }
  
  public void setRadius(double r) {
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
