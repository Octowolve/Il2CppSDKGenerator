#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetChild"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& childName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& withTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetChild*))(Il2CppBase() + 0x5086750))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetChild*))(Il2CppBase() + 0x508684C))(this);
	}
	template <typename T = uintptr_t> static T DoGetChildByName(uintptr_t root, Il2CppString* name, Il2CppString* tag) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x50868F4))(0, root, name, tag);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(GetChild*))(Il2CppBase() + 0x5087044))(this);
	}

};

}
