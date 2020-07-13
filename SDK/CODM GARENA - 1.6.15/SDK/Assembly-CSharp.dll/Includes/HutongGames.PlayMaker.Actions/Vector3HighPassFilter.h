#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3HighPassFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3HighPassFilter"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& filteringFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& filteredVector() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3HighPassFilter*))(Il2CppBase() + 0x4F1D80C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3HighPassFilter*))(Il2CppBase() + 0x4F1D83C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3HighPassFilter*))(Il2CppBase() + 0x4F1D8F0))(this);
	}

};

}
