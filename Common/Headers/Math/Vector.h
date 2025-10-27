#pragma once

namespace Math
{
	struct Vector2D
	{
		float x;
		float y;
	};

	struct Vector3D
	{
		float x;
		float y;
		float z;
	};

	struct Vector4D
	{
		float x;
		float y;
		float z;
		float w;
	};
	
}

using Point = Math::Vector2D;
using Vector = Math::Vector3D;
