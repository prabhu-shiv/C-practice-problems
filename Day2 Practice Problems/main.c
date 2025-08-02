#include <assert.h>
#include <stdio.h>
#include "Day2.h"

int main()
{
	assert(sum_of_digits(12345) == 15);

	assert(reverse_num(12345) == 54321);

	assert(occur(12312132, 3) == 2);

	assert(is_Palindrome(1234321) == IS_PALINDROME);
	assert(is_Palindrome(12344322) == NOT_PALINDROME);

	assert(is_prime(23) == IS_PRIME);
	assert(is_prime(24) == NOT_PRIME);

	int n=5;
	gen_prime_number(n);

	assert(sum_of_series(4) == 1234);

	assert(Armstrong_num(153) == IS_ARMSTRONG_NUMBER);
	assert(Armstrong_num(123) == NOT_ARMSTRONG_NUMBER);

	assert(amicable_pair(220, 284) == IS_AMICABLE_PAIR);
	assert(amicable_pair(50, 20) == NOT_AMICABLE_PAIR);

	assert(menu_driven_calc('a',1,2) == 3);
	assert(menu_driven_calc('d',1,2) == CAN_NOT_CALUCULATE);

	int choice;
    float side, length, breadth, height, radius;
    printf("Choose a shape to calculate its volume:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Sphere\n");
    printf("4. Cylinder\n");
    printf("5. Cone\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            printf("Enter the side length of the cube: ");
            scanf("%f", &side);
            printf("Volume of the cube: %.2f\n\n", calculateCubeVolume(side));
            break;
        case 2:
            printf("Enter the length, breadth, and height of the cuboid: ");
            scanf("%f %f %f", &length, &breadth, &height);
            printf("Volume of the cuboid: %.2f\n\n", calculateCuboidVolume(length, breadth, height));
            break;
        case 3:
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            printf("Volume of the sphere: %.2f\n\n", calculateSphereVolume(radius));
            break;
        case 4:
            printf("Enter the radius and height of the cylinder: ");
            scanf("%f %f", &radius, &height);
            printf("Volume of the cylinder: %.2f\n\n", calculateCylinderVolume(radius, height));
            break;
        case 5:
            printf("Enter the radius and height of the cone: ");
            scanf("%f %f", &radius, &height);
            printf("Volume of the cone: %.2f\n\n", calculateConeVolume(radius, height));
            break;
        default:
            printf("Invalid choice!\n\n");
    }

    printf("%d\n\n",electricity_bill(400));

    int operation, bin, dec;
    printf("Choose a Operation to be performed:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &operation);
    switch(operation)
    {
		case 1:
			printf("Enter the Binary version: ");
			scanf("%d", &bin);
			printf("%d\n\n", bin_to_dec(bin));
			break;
		case 2:
			printf("Enter the Decimal version: ");
			scanf("%d", &dec);
			printf("%lld\n\n", dec_to_bin(dec));
			break;
		default:
			printf("Invalid choice!\n\n");
    }

    sequence(6);

    inverse_half_pyramid(4);
    half_pyramid(4);

    two_digit_sum_nine(9);

	return 0;
}