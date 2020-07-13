#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class SplineKeyframe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "WellFired", "SplineKeyframe"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(SplineKeyframe*))(Il2CppBase() + 0x4854F6C))(this);
	}
	template <typename T = void> T set_Position(Il2CppVector3 value) {
		return ((T (*)(SplineKeyframe*, Il2CppVector3))(Il2CppBase() + 0x4854FC4))(this, value);
	}

};

}
