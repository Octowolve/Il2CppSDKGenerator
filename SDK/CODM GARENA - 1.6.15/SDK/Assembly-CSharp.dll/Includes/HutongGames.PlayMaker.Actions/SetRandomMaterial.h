#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetRandomMaterial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetRandomMaterial"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& materialIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetRandomMaterial*))(Il2CppBase() + 0x502AB08))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetRandomMaterial*))(Il2CppBase() + 0x502ABB8))(this);
	}
	template <typename T = void> T DoSetRandomMaterial() {
		return ((T (*)(SetRandomMaterial*))(Il2CppBase() + 0x502ABD8))(this);
	}

};

}
