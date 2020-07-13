#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertBoolToString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertBoolToString"));
	}

	template <typename T = uintptr_t> T& boolVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& falseString() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& trueString() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertBoolToString*))(Il2CppBase() + 0x4F3D164))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertBoolToString*))(Il2CppBase() + 0x4F3D220))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertBoolToString*))(Il2CppBase() + 0x4F3D2B4))(this);
	}
	template <typename T = void> T DoConvertBoolToString() {
		return ((T (*)(ConvertBoolToString*))(Il2CppBase() + 0x4F3D24C))(this);
	}

};

}
