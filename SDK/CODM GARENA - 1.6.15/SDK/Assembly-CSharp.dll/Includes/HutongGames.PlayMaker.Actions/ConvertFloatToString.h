#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertFloatToString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertFloatToString"));
	}

	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stringVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& format() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertFloatToString*))(Il2CppBase() + 0x4FBDFA0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertFloatToString*))(Il2CppBase() + 0x4FBDFB8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertFloatToString*))(Il2CppBase() + 0x4FBE174))(this);
	}
	template <typename T = void> T DoConvertFloatToString() {
		return ((T (*)(ConvertFloatToString*))(Il2CppBase() + 0x4FBDFE4))(this);
	}

};

}
