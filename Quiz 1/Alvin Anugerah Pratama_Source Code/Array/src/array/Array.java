// Created by 22343019_Alvin Anugerah Pratama

package array;
public class Array {
    public static void main(String[] args) {
         // membuat array kosong dengan panjang 5
        int[] myArray = new int[5];

        // mengisi elemen pada array
        myArray[0] = 10;
        myArray[1] = 20;
        myArray[2] = 30;
        myArray[3] = 40;
        myArray[4] = 50;

        // menampilkan isi dari array
        System.out.println("Isi dari array adalah:");
        for (int i = 0; i < myArray.length; i++) {
            System.out.println(myArray[i]);
        }
    }
}