#include<stdio.h>
#include<math.h>
void main()
{
// Quadratic equation is a^2 + 2a*b + c = 0
	float a, b, c;  
	printf("\n Eneter values of a, b & c: ");
	scanf("%f%f%f", &a, &b, &c);

	float discr , r1, r2, realpt, imagpt;
	// formula of discriminant is (b^2 - 4*a*c)

	discr = b*b - 4*a*c;

	if(discr > 0)
		// formula is root1 = -b + squareroot of discriminant /2a
		// formula is root1 = -b - squareroot of discriminant /2a
	{
       r1 = (-b + sqrt(discr)) / (2*a); 
       r2 = (-b - sqrt(discr)) / (2*a);

       printf("\n Root1 = %f\t Root2 = %f\n", r1, r2);
	}

	else if(discr == 0)

		// In this case root1=root2 and formula for that is -b / 2a

	{
		r1 = r2 = -b / (2*a);

		printf("\n Root1 = Root2 = %f\n", r1);
	}

	else if(discr < 0)
		// In this case we have to parts realpart and imaginary part
		// root1 = real part + imaginary part i.e (-b/2a) + (squareroot of (-discriminant) / 2a)
		// root1 = real part - imaginary part i.e (-b/2a) - (squareroot of (-discriminant) / 2a)
    {
        realpt = -b / (2*a);
        imagpt = sqrt(-discr) / (2*a);
		r1 = realpt + imagpt;
		r2 = realpt - imagpt;
		printf("\n Root1 = %f\t Root2 = %f\n", r1 , r2);
    } 

    else
    {
    	printf("\n Oops..Quadratic equation is wrong!");
    }
}