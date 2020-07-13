#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertBoolToFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertBoolToFloat"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& floatVariable() {
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
		return ((T (*)(ConvertBoolToFloat*))(Il2CppBase() + 0x4F3CF90))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertBoolToFloat*))(Il2CppBase() + 0x4F3CFD8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertBoolToFloat*))(Il2CppBase() + 0x4F3D070))(this);
	}
	template <typename T = void> T DoConvertBoolToFloat() {
		return ((T (*)(ConvertBoolToFloat*))(Il2CppBase() + 0x4F3D004))(this);
	}

};

}
