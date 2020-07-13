#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideBuyCoin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_BuyCoin"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Exit() {
		return ((T (*)(PVENewGuideBuyCoin*))(Il2CppBase() + 0x31722BC))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuideBuyCoin*))(Il2CppBase() + 0x3172788))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(PVENewGuideBuyCoin*, uintptr_t))(Il2CppBase() + 0x3172904))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_Exit() {
		return ((T (*)(PVENewGuideBuyCoin*))(Il2CppBase() + 0x3172AA4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuideBuyCoin*))(Il2CppBase() + 0x3172AA8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(PVENewGuideBuyCoin*, uintptr_t))(Il2CppBase() + 0x3172AAC))(this, P0);
	}

};

}
