#pragma once

#include "Vector.h"

namespace Math
{
	float LengthSquared(Vector2D v);
	float Length(Vector2D v);
	Vector2D operator-(Vector2D lhs, Vector2D rhs);
	bool operator==(Vector2D lhs, Vector2D rhs);
}




