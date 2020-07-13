#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideBuyMysteriousBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_BuyMysteriousBox"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T get_NotifyAndSelfCheck() {
		return ((T (*)(PVENewGuideBuyMysteriousBox*))(Il2CppBase() + 0x3173408))(this);
	}
	template <typename T = void> T SetItemState(uintptr_t s) {
		return ((T (*)(PVENewGuideBuyMysteriousBox*, uintptr_t))(Il2CppBase() + 0x3173410))(this, s);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuideBuyMysteriousBox*))(Il2CppBase() + 0x31734C0))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(PVENewGuideBuyMysteriousBox*, uintptr_t))(Il2CppBase() + 0x317363C))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_SetItemState(uintptr_t P0) {
		return ((T (*)(PVENewGuideBuyMysteriousBox*, uintptr_t))(Il2CppBase() + 0x31737DC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuideBuyMysteriousBox*))(Il2CppBase() + 0x31737E0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(PVENewGuideBuyMysteriousBox*, uintptr_t))(Il2CppBase() + 0x31737E4))(this, P0);
	}

};

}
