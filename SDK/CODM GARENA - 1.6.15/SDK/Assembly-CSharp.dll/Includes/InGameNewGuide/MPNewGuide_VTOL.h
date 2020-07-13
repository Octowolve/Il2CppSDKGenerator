#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class MPNewGuideVTOL
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "MPNewGuide_VTOL"));
	}

	template <typename T = uintptr_t> T& m_CrossHair_VTOL() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_VTOLChangePosBtnHud() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseCrossHairEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseChangePosBtnEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T ShowEffect() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316EF00))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316F2BC))(this);
	}
	template <typename T = void> T CloseCrossHairEffect() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316F380))(this);
	}
	template <typename T = void> T CloseChangePosBtnEffect() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316F540))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316F700))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(MPNewGuideVTOL*, uintptr_t))(Il2CppBase() + 0x316F948))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316FC64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316FC68))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(MPNewGuideVTOL*))(Il2CppBase() + 0x316FC6C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(MPNewGuideVTOL*, uintptr_t))(Il2CppBase() + 0x316FC70))(this, P0);
	}

};

}
