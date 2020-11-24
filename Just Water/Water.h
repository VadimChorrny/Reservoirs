#pragma once
class Water
{
public:
	enum class Reservoirs { LAKE, SEA, RIVER, UNDEFINED };

	void setName(const char* name);
	const char* getName() const;

	void setReservoirs(Reservoirs res);
	Reservoirs getReservoirs() const;
	const char* getReservoirStr() const;

	// setters for info reservoirs

	void setSize(const size_t& sizeWater);
	void setLong(const size_t& longWater);
	void setDepth(const size_t& maxDepth);
	void setTypeReservoirs(const Reservoirs& type);

	// getters for reservoirs
	const size_t getSize() const;
	const size_t getLong() const;
	const size_t getDepth() const;
	static size_t getQtyWater();



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
	Reservoirs type;
	Reservoirs res = Reservoirs::UNDEFINED;


};
static size_t countWater;

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