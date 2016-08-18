struct numbers{
	int number1;
	int number2;
};

program CALCULATE{
	version CALCULATE_1{
		int add(numbers) = 1;
		int subtract(numbers) = 2;
		int multiply(numbers) = 3;
		float divide(numbers) = 4;
	} = 1;
} = 0x2fffffff;
