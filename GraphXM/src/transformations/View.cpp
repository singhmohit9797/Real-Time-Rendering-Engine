#include "View.h"

#include "Translation.h"
#include "../matrices/Matrix4.h"
#include "../vectors/Vector3.h"

namespace gm
{
	Matrix4 View::LookAt(const Vector3& CameraPosition, const Vector3& LookAtPoint, const Vector3& UpVector)
	{
		Matrix4 result;
		
		// New z - axis after the camera transformations (View Vector i.e. from target to camera)
		Vector3 ViewVector = (CameraPosition - LookAtPoint);
		ViewVector = ViewVector.Normal();

		// New x - axis after the camera transformations (Right vector)
		Vector3 RightVector = Vector3::CrossProduct(UpVector, ViewVector);
		RightVector = RightVector.Normal();

		// New y - axis (Final Up Vector)
		Vector3 NewUpVector = Vector3::CrossProduct(ViewVector, RightVector);
		NewUpVector = NewUpVector.Normal();

		result[0][0] = RightVector.x;
		result[0][1] = RightVector.y;
		result[0][2] = RightVector.z;

		result[1][0] = NewUpVector.x;
		result[1][1] = NewUpVector.y;
		result[1][2] = NewUpVector.z;

		result[2][0] = ViewVector.x;
		result[2][1] = ViewVector.y;
		result[2][2] = ViewVector.z;

		Translation trans(-CameraPosition);

		return result * trans;
	}
}