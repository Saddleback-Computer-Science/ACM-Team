/**
 *
 * @author Shawn Azar
 * 
 * This was written for Saddle back Computer Science Society & The ACM Club.
 * Check read.me for prompt
 */
package acm.cap.trade;

public class ACMCapTrade {

    public static void main(String[] args) {
        // TODO code application logic here
        String[] inputAR = 
        {
            "SCC,90000,15,485000,967000",
            "UCX,150000,15,1500000,6000000"
        };
        String[] splitInputStringAR;
        
        System.out.println("String Output Method");
        for (String inputString : inputAR) 
        {
            splitInputStringAR = inputString.split(",");
        
            System.out.println(splitInputStringAR[0] + " Fees per Unit: $" + (int)Math.round(Double.parseDouble(splitInputStringAR[3])/Double.parseDouble(splitInputStringAR[1])) + "-$" + (int)Math.round(Double.parseDouble(splitInputStringAR[4])/Double.parseDouble(splitInputStringAR[1])) + " Full Time: $" + (int)Math.round((Double.parseDouble(splitInputStringAR[3])/Double.parseDouble(splitInputStringAR[1]))*Double.parseDouble(splitInputStringAR[2])) + "-$" + (int)Math.round((Double.parseDouble(splitInputStringAR[4])/Double.parseDouble(splitInputStringAR[1]))*Double.parseDouble(splitInputStringAR[2])) );
        }
        
        
        System.out.println("\nVariable Output Method");
        for(int i = 0; i < inputAR.length; i++)
        {
            splitInputStringAR = inputAR[i].split(",");
            
            String schoolName = splitInputStringAR[0];
            Double enrolledUnits = Double.parseDouble(splitInputStringAR[1]);
            Double fullTimeUnits = Double.parseDouble(splitInputStringAR[2]);
            Double minAnnualCost = Double.parseDouble(splitInputStringAR[3]);
            Double maxAnnualCost = Double.parseDouble(splitInputStringAR[4]);
            
            int minPerUnitCost  = (int)Math.round(minAnnualCost/enrolledUnits);
            int maxPerUnitCost  = (int)Math.round(maxAnnualCost/enrolledUnits);
            int minFullTimeCost = (int)Math.round((minAnnualCost/enrolledUnits)*fullTimeUnits);
            int maxFullTimeCost = (int)Math.round((maxAnnualCost/enrolledUnits)*fullTimeUnits);
            
            System.out.println(schoolName + " Fees per Unit: $" + minPerUnitCost + "-$" + maxPerUnitCost + " Full Time: $" + minFullTimeCost + "-$" + maxFullTimeCost);
            
        }
    }
}
