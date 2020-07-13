#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3LowPassFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3LowPassFilter"));
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
		return ((T (*)(Vector3LowPassFilter*))(Il2CppBase() + 0x4F1E1E4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3LowPassFilter*))(Il2CppBase() + 0x4F1E214))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3LowPassFilter*))(Il2CppBase() + 0x4F1E2C8))(this);
	}

};

}
