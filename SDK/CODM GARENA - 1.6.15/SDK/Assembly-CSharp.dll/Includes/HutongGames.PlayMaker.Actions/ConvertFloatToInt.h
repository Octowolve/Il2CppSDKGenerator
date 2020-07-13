#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertFloatToInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertFloatToInt"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& rounding() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertFloatToInt*))(Il2CppBase() + 0x4F3D434))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertFloatToInt*))(Il2CppBase() + 0x4F3D450))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertFloatToInt*))(Il2CppBase() + 0x4F3D648))(this);
	}
	template <typename T = void> T DoConvertFloatToInt() {
		return ((T (*)(ConvertFloatToInt*))(Il2CppBase() + 0x4F3D47C))(this);
	}

};

}
