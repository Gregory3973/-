#pragma once

class IElectronic
{
public:
	virtual void Show() = 0;
	virtual ~IElectronic () = default;
};
