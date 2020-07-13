#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastLabelAndIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastLabelAndIcon"));
	}

	template <typename T = uintptr_t> T& TipLabel1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TipLabel2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TipIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& WidgetSp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLabelWdith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Show(uint32_t key, Il2CppArray<uintptr_t>* Params) {
		return ((T (*)(BRBroadcastLabelAndIcon*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C42D4))(this, key, Params);
	}
	template <typename T = int32_t> T GetLabelWdith() {
		return ((T (*)(BRBroadcastLabelAndIcon*))(Il2CppBase() + 0x35C4ED4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Show(uint32_t P0, Il2CppArray<uintptr_t>* P1) {
		return ((T (*)(BRBroadcastLabelAndIcon*, uint32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35C4F90))(this, P0, P1);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetLabelWdith() {
		return ((T (*)(BRBroadcastLabelAndIcon*))(Il2CppBase() + 0x35C4F94))(this);
	}

};

}
