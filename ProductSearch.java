import java.util.Scanner;

public class PSearch {
	
	
	    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] productIDs = {104, 105, 106, 107, 101, 102, 103};
        System.out.print("Enter the product ID to search for: ");
        int targetID = scanner.nextInt();

        int index = findProductIndex(productIDs, targetID);
        if (index != -1) {
            System.out.println("The product Index of  ID is " + targetID + ": " + index);
        } else {
            System.out.println("The Product ID of  " + targetID + " not found.");
        }

        scanner.close();
    }
	
    public static int findProductIndex(int[] productIDs, int targetID) {
        int left = 0;
        int right = productIDs.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (productIDs[mid] == targetID) {
                return mid;
            }

       
            if (productIDs[left] <= productIDs[mid]) {
              
                if (productIDs[left] <= targetID && targetID < productIDs[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
              
                if (productIDs[mid] < targetID && targetID <= productIDs[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1; 
    }


}
