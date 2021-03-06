#pragma once

namespace gm
{
	// Forward declarations 
	class Matrix4;

	class Projection
	{
	private:
		Projection();

	public:
		/** Creates an orthographic projection matrix which converts the bounding box given by the dimension into a unit cube centered at origin */
		static Matrix4 Ortho(float left, float right, float bottom, float top, float near, float far);

		/* Creates a perspective projection matrix which converts the frustum with formed by the dimensions (parameters) into a unit cube centered at origin */
		static Matrix4 Frustum(float left, float right, float bottom, float top, float near, float far);

		/* Creates a perspective projection matrix which projects the objects in the frustum specified by the field of view, the given screen dimensions, the near plane and the far plane */
		static Matrix4 Perspective(float FieldOfView, float width, float height, float near, float far);

		/* Creates a perspective projection matrix which projects the object in the */
		static Matrix4 Perspective(float FieldOfView, float AspectRatio, float near, float far);
	};
}