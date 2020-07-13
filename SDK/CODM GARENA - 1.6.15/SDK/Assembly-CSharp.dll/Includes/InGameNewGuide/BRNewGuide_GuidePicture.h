#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class BRNewGuideGuidePicture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "BRNewGuide_GuidePicture"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Enter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverTimeExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499BA78))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(BRNewGuideGuidePicture*, uintptr_t))(Il2CppBase() + 0x499BB18))(this, ID);
	}
	template <typename T = void> T Register() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499BC04))(this);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499BE04))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499BEAC))(this);
	}
	template <typename T = void> T OverTimeExit() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499BF54))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499C044))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(BRNewGuideGuidePicture*, uintptr_t))(Il2CppBase() + 0x499C04C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Register() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499C054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Enter() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499C05C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Exit() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499C064))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OverTimeExit() {
		return ((T (*)(BRNewGuideGuidePicture*))(Il2CppBase() + 0x499C06C))(this);
	}

};

}
