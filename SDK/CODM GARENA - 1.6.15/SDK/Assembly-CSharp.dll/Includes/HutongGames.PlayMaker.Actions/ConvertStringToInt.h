#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertStringToInt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertStringToInt"));
	}

	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertStringToInt*))(Il2CppBase() + 0x4FBEC68))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertStringToInt*))(Il2CppBase() + 0x4FBEC7C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertStringToInt*))(Il2CppBase() + 0x4FBED04))(this);
	}
	template <typename T = void> T DoConvertStringToInt() {
		return ((T (*)(ConvertStringToInt*))(Il2CppBase() + 0x4FBECA8))(this);
	}

};

}
