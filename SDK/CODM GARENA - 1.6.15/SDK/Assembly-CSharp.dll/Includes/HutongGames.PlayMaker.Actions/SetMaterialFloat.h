#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetMaterialFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetMaterialFloat"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& materialIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& namedFloat() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& floatValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetMaterialFloat*))(Il2CppBase() + 0x5028FD8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetMaterialFloat*))(Il2CppBase() + 0x50290D4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetMaterialFloat*))(Il2CppBase() + 0x50294A0))(this);
	}
	template <typename T = void> T DoSetMaterialFloat() {
		return ((T (*)(SetMaterialFloat*))(Il2CppBase() + 0x5029100))(this);
	}

};

}
