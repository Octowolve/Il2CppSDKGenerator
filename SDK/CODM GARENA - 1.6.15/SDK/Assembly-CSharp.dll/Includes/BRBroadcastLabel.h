#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastLabel"));
	}

	template <typename T = uintptr_t> T& TipLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Show(uint32_t key, Il2CppArray<uintptr_t>* Params) {
		return ((T (*)(BRBroadcastLabel*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C3C70))(this, key, Params);
	}
	template <typename T = void> T xLuaBaseProxy_Show(uint32_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(BRBroadcastLabel*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C4228))(this, P0, P1);
	}

};

}
