#include "Math/VectorMath.h"

#include <math.h>
#include <unordered_map>
#include <functional>

namespace Math
{
	Vector2D operator-(Vector2D lhs, Vector2D rhs)
	{
		return { lhs.x - rhs.x, lhs.y - rhs.y };
	}

    bool operator==(Vector2D lhs, Vector2D rhs)
    {
		return lhs.x == rhs.x && lhs.y == rhs.y;
    }

	float LengthSquared(Vector2D v)
	{
		return v.x * v.x + v.y * v.y;
	}

	float Length(Vector2D v)
	{
		return sqrtf( LengthSquared(v));
	}
	
}
