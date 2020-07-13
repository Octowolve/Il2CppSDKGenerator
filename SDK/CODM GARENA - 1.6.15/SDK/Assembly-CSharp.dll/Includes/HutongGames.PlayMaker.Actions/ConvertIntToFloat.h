#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertIntToFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertIntToFloat"));
	}

	template <typename T = uintptr_t> T& intVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& floatVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertIntToFloat*))(Il2CppBase() + 0x4FBE180))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertIntToFloat*))(Il2CppBase() + 0x4FBE194))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertIntToFloat*))(Il2CppBase() + 0x4FBE214))(this);
	}
	template <typename T = void> T DoConvertIntToFloat() {
		return ((T (*)(ConvertIntToFloat*))(Il2CppBase() + 0x4FBE1C0))(this);
	}

};

}
