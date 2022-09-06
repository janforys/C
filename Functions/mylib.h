/* +++++++ My Library +++++++ */
/* +++++ Jan Forys 2022 +++++ */


/* Function that converts decimal value to binary value */
int decimal2binary(int decimal_value) {
    int m, multiplier = 1, sum = 0, sum_result = 0;
    // Count 'multiplier' value, needed for remainder multiplying
    for (int d = decimal_value; d > 1; d /= 2) {
        multiplier *= 10;
    }
    m = multiplier; // to avoid 'multiplier' change
        while (decimal_value >= 1) {
            sum += decimal_value % 2 * m;
            decimal_value /= 2;
            m /= 10;
        } do { // converting to result value
            sum_result += sum % 10 * multiplier;
            sum /= 10;
            multiplier /= 10;
        } while (sum >= 1);
    return sum_result;
}
