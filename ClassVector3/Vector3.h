
template<class TYPE>
class Vector3 {
public:
	TYPE x, y, z;

	Vector3(const TYPE& x, const TYPE& y, const TYPE& z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector3(const Vector3<TYPE>& v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
	}
	Vector3()
	{
	}

	Vector3 operator +(const Vector3& v) const
	{
		Vector3 r;

		r.x = this->x + v.x;
		r.y = this->y + v.y;
		r.z = this->z + v.z;

		return r;
	}

	Vector3 operator +=(const Vector3& v)
	{
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;

		return *this;
	}

	Vector3 operator -(const Vector3& v) const
	{
		Vector3 r;

		r.x = this->x - v.x;
		r.y = this->y - v.y;
		r.z = this->z - v.z;
		return r;
	}

	Vector3 operator -=(const Vector3& v)
	{
		this->x -= v.x;
		this->y -= v.y;
		this->z -= v.z;

		return *this;
	}

	Vector3 operator =(const Vector3& v)
	{
		this->x = v.x;
		this->y = v.y;
		this->z = v.z;

		return *this;
	}	

	bool operator ==(const Vector3& v)
	{
		if (this->x == v.x && this->y == v.y && this->z == v.z)
			return true;
		else
			return false;
	}

	
	TYPE  Magnitude() const
	{
		return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
	}

	Vector3 Normalize()
	{
		TYPE magnitude = this->Magnitude();

		if(magnitude > 0){
			this->x /= magnitude;
			this->y /= magnitude;
			this->z /= magnitude;
		}

		return *this;
	}

	TYPE Distance(Vector3<TYPE> b) const
	{
		TYPE x = (b.x - this->x);
		TYPE y = (b.y - this->y);
		TYPE z = (b.z - this->z);

		TYPE toRoot = x * x + y * y + z * z;

		return sqrt(toRoot);
	}

	Vector3 Zero()
	{

		this->x = 0;
		this->y = 0;
		this->z = 0;

		return *this;
	}

	bool isZero() const
	{
		if (this->x == 0 && this->y == 0 && this->z == 0)
			return true;
		else
			return false;
	}
};