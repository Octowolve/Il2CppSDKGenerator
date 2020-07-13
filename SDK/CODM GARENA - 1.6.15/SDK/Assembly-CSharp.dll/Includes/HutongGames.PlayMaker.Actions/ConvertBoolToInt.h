#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertBoolToInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertBoolToInt"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& falseValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& trueValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertBoolToInt*))(Il2CppBase() + 0x4F3D07C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertBoolToInt*))(Il2CppBase() + 0x4F3D0C4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertBoolToInt*))(Il2CppBase() + 0x4F3D158))(this);
	}
	template <typename T = void> T DoConvertBoolToInt() {
		return ((T (*)(ConvertBoolToInt*))(Il2CppBase() + 0x4F3D0F0))(this);
	}

};

}
