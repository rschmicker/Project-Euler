import java.util.*;
import java.io.*;

public class main{
    public static void main(String[] args) throws FileNotFoundException {
        int[][] grid = new int[20][20];
        int x = 0, y = 0;
        long temp = 1;
        ArrayList<Long> products = new ArrayList<Long>();
        try{
            Scanner sc = new Scanner(new File("input.txt"));
            while(sc.hasNext()){
                grid[x][y] = sc.nextInt();
                x++;
                if(x==20){
                    x = 0;
                    y++;
                }
            }
        }
        catch(FileNotFoundException ex){
            System.out.println("File not found");
        }
        
        //Horizontally
        for(y = 0; y < 20; y++){
            for(x = 0; x < 20; x++){
                if(x%4==0){
                    temp = 1;
                }
                temp *= grid[x][y];
                products.add(temp);
            }
        }
        
        //Vertically
        for(x = 0; x < 20; x++){
            for(y = 0; y < 20; y++){
                if(y%4==0){
                    temp = 1;
                }
                temp *= grid[x][y];
                products.add(temp);
            }
        }
        
        //diagonal down to right
        for(y = 0; y < 20; y++){
            for(x = 0; x < 20; x++){
                if(x < 17 && y < 17){
                    temp = 1;
                    temp = grid[x][y] * grid[x+1][y+1] * grid[x+2][y+2] * grid[x+3][y+3];
                    products.add(temp);
                }
            }
        }
        
        //diagonal down to left
        for(y = 0; y < 20; y++){
            for(x = 3; x < 20; x++){
                if(x > 2 && y < 17){
                    temp = 1;
                    temp = grid[x][y] * grid[x-1][y+1] * grid[x-2][y+2] * grid[x-3][y+3];
                    products.add(temp);
                }
            }
        }
        
        System.out.println(Collections.max(products));
        
    }
}