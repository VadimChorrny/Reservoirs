#pragma once
class Water
{
public:
	enum class Reservoirs  { LAKE, SEA, RIVER , UNDEFINED };

	void setName(const char* name);
	const char* getName() const;

	void setReservoirs(Reservoirs res);
	Reservoirs getReservoirs() const;
	const char* getReservoirStr() const;		

	void setSize(size_t size) const;
	const size_t* getSize() const;

	void setLong(size_t longs) const;
	const size_t* getLong() const;

	//overload
	Water(const char* name); // 1 - request for name
	Water(Reservoirs res = Reservoirs::UNDEFINED); // 2 - request for reservoirs


	Water();
	~Water();
	static size_t getCountWater();
	const char* getName();
	void print() const;
private:
	char* name = nullptr;
	size_t sizeWater = 0;
	size_t longWater = 0;
	size_t maxDepth = 0;
	Reservoirs res = Reservoirs::UNDEFINED;
	static size_t countWater;	


}; 

inline size_t Water::getCountWater() 
{
	return countWater;
}
inline const char* Water::getName()
{
	return name;
}
inline void Water::setReservoirs(Reservoirs res)
{
	if (res >= Reservoirs::LAKE && res <= Reservoirs::UNDEFINED)
	{
		this->res = res;
	}
	else
	{
		this->res = Reservoirs::UNDEFINED;
	}
}
inline Water::Reservoirs	 Water::getReservoirs() const
{
	return res;
}