#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertBoolToColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertBoolToColor"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& colorVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& falseColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& trueColor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertBoolToColor*))(Il2CppBase() + 0x4F3CE44))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertBoolToColor*))(Il2CppBase() + 0x4F3CEC4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertBoolToColor*))(Il2CppBase() + 0x4F3CF84))(this);
	}
	template <typename T = void> T DoConvertBoolToColor() {
		return ((T (*)(ConvertBoolToColor*))(Il2CppBase() + 0x4F3CEF0))(this);
	}

};

}
