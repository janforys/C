/* C Program to calculate Standard Deviation */


#include <stdio.h>
#include <math.h>

void calculateSD(float nums[10]);

int main() {

float nums[10];

printf("Type 10 numbers: ");
for (int index = 0; index < 10; index++) {
scanf("%f", &nums[index]);
}
calculateSD(nums);

return 0;
}

void calculateSD(float nums[10]) {

float standardDeviation;
float sum = 0, summary = 0;
float mean, variance;

for (int index = 0; index < 10; index++) {
sum += nums[index];
}
mean = sum / 10;
for (int index = 0; index < 10; index++) {
summary += pow((nums[index] - mean), 2);
}

variance = summary / 10;
standardDeviation = sqrt(variance);
printf("Standard deviation = %f\n\n", standardDeviation);
}

