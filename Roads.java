/*
* @author Yash_Nehal_Punit
*/
class Roads{

  //Generating Random Values
  final static int roadNumber = ((int)(Math.random()*100))%4 + 1;
  final static int distance = (int)(Math.random()*100);

  //Creating Static Variables
  static int totalDistance = 0;
  static boolean friendNotFound = true;

  //Static Block to show random generated values
  static{
    System.out.println("Actual Values :-\nRoad Number -> "+roadNumber+"\nDistance -> "+distance+"m");
  }

  //Method to Check Friend On Road 1
  static void checkRoadOne(int checkDistance){
    if( checkDistance == distance && roadNumber == 1 ){
      totalDistance += checkDistance;
      System.out.println("\nFriend Found on Road 1 at Distance :" + checkDistance +" m" +"\nTotal Distance -> "+totalDistance );
      friendNotFound = false;
    }
    else{
      totalDistance += 2*checkDistance;
    }
  }

  //Method to Check Friend On Road 2
  static void checkRoadTwo(int checkDistance){
    if( checkDistance == distance && roadNumber == 2 ){
      totalDistance += checkDistance;
      System.out.println("\nFriend Found on Road 2 at Distance :" + checkDistance +" m"  +"\nTotal Distance -> "+totalDistance  );
      friendNotFound = false;
    }
    else{
      totalDistance += 2*checkDistance;
    }
  }

  //Method to Check Friend On Road 3
  static void checkRoadThree(int checkDistance){
    if( checkDistance == distance && roadNumber == 3 ){
      totalDistance += checkDistance;
      System.out.println("\nFriend Found on Road 3 at Distance :" + checkDistance +" m" +"\nTotal Distance -> "+totalDistance  );
      friendNotFound = false;
    }
    else{
      totalDistance += 2*checkDistance;
    }
  }

  //Method to Check Friend On Road 4
  static void checkRoadFour(int checkDistance){
    if( checkDistance == distance && roadNumber == 4 ){
      totalDistance += checkDistance;
      System.out.println("\nFriend Found on Road 4 at Distance :" + checkDistance +" m" +"\nTotal Distance -> "+totalDistance  );
      friendNotFound = false;
    }
    else{
      totalDistance += 2*checkDistance;
    }
  }


  //Driver Program
  public static void main(String args[]){
    int checkingDistance=0;
    while(friendNotFound){
      checkRoadOne(checkingDistance);
      checkRoadTwo(checkingDistance);
      checkRoadThree(checkingDistance);
      checkRoadFour(checkingDistance);
      checkingDistance++;
    }
  }
}
