#include <stdio.h>

int main() {
    int score, additiveScore, difference, numTD2Pt, numTD1Pt, numTD, numFG, numSafety; // declares variables

    printf("Enter the score: "); // sets the score equal to the user input
    scanf("%d", &score);


    if (score < 2) {
        return 0;
    }

    for (numTD2Pt = 0; numTD2Pt * 8 <= score; numTD2Pt++) { // a for loop that loops through the range of zero to score / 8

        for (numTD1Pt = 0; numTD1Pt * 7 <= score; numTD1Pt++) {// a for loop that loops through the range of zero to score / 7

            for (numTD = 0; numTD * 6 <= score; numTD++) {// a for loop that loops through the range of zero to score / 6

                for (numFG = 0; numFG * 3 <= score; numFG++) {// a for loop that loops through the range of zero to score / 3

                    for (numSafety = 0; numSafety * 2 <= score; numSafety++) {// a for loop that loops through the range of zero to score / 2
                        additiveScore = numTD2Pt * 8 + numTD1Pt * 7 + numTD * 6 + numFG * 3 + numSafety * 2; // adds up the current score that the for loop creates
                        
                        if (additiveScore == score) {
                            printf("%d TD + 2pt, %d TD + 1pt, %d TD, %d FG, %d Safety\n", numTD2Pt, numTD1Pt, numTD, numFG, numSafety);
                        }

                    }

                }

            }

        }

    }

    return 0;
}