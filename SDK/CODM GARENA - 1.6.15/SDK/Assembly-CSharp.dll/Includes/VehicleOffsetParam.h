#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VehicleOffsetParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VehicleOffsetParam"));
	}

	template <typename T = Il2CppVector3> T& m_FireOffset_Vehicle_1P() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_FireOffset_Vehicle_3P() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_FireDirectOffset_Vehicle_1P() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_FireDirectOffset_Vehicle_3P() {
		return *(T*)((uintptr_t)this + 0x2C);
	}


};

}
