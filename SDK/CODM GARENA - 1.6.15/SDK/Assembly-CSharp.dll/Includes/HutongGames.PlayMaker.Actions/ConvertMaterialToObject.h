#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ConvertMaterialToObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ConvertMaterialToObject"));
	}

	template <typename T = uintptr_t> T& materialVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& objectVariable() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ConvertMaterialToObject*))(Il2CppBase() + 0x4FBE408))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ConvertMaterialToObject*))(Il2CppBase() + 0x4FBE41C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ConvertMaterialToObject*))(Il2CppBase() + 0x4FBE494))(this);
	}
	template <typename T = void> T DoConvertMaterialToObject() {
		return ((T (*)(ConvertMaterialToObject*))(Il2CppBase() + 0x4FBE448))(this);
	}

};

}
