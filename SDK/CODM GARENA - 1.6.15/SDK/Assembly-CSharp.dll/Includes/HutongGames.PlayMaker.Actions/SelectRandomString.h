#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SelectRandomString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SelectRandomString"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& strings() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& weights() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeString() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SelectRandomString*))(Il2CppBase() + 0x4FAE174))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SelectRandomString*))(Il2CppBase() + 0x4FAE34C))(this);
	}
	template <typename T = void> T DoSelectRandomString() {
		return ((T (*)(SelectRandomString*))(Il2CppBase() + 0x4FAE36C))(this);
	}

};

}
