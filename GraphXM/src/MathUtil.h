#pragma once

#define PI 3.14159265

namespace gm
{
	/* Maths utility for the maths library */
	struct MathUtil
	{
		/* Returns the square of the value */
		template<typename T>
		static float Square(const T Value)
		{
			return Value * Value;
		}

		/* Returns the sqrt of the value */
		template<typename T>
		static float Sqrt(const T Value)
		{
			if (Value > 0)
				return std::sqrt(Value);
			else
				return 0;
		}

		/* Returns min of the two values */
		template<typename T>
		static T Min(const T A, const T B)
		{
			return A > B ? B : A;
		}

		/* Returns max of the two values */
		template <typename T>
		static T Max(const T A, const T B)
		{
			return A > B ? A : B;
		}

		/************ Trignometric functions  **************/

		// Cosine Function
		template <typename T>
		static double Cos(T angleInDegrees)
		{
			return cos(angleInDegrees * PI / 180);
		}

		// Secant Function
		template <typename T>
		static double Sec(T angleInDegrees)
		{
			return 1 / Cos(angleInDegrees);
		}

		// Sine Function
		template <typename T>
		static double Sin(T angleInDegrees)
		{
			return sin(angleInDegrees * PI / 180);
		}

		// Cosecant Function
		template <typename T>
		static double Csc(T angleInDegrees)
		{
			return 1 / Sin(angleInDegrees);
		}

		// Tangent Function
		template <typename T>
		static double Tan(T angleInDegrees)
		{
			return tan(angleInDegrees * PI / 180);
		}

		// Cotangent Function
		template <typename T>
		static double Cot(T angleInDegrees)
		{
			return 1 / Tan(angleInDegrees);
		}

		/************ Inverse Trignometric functions  **************/

		// Inverse Cosine Function
		template <typename T>
		static double CosInverse(T Val)
		{
			return acos(Val) * 180 / PI;
		}

		// Inverse Sine Function
		template <typename T>
		static double SinInverse(T Val)
		{
			return asin(Val) * 180 / PI;
		}

		// Inverse Tangent Function
		template <typename T>
		static double TanInverse(T Val)
		{
			return atan(Val) * 180 / PI;
		}
	};
}