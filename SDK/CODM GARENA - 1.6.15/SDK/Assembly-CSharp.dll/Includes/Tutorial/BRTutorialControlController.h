#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class BRTutorialControlController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "BRTutorialControlController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA094))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA138))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA244))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA2EC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA394))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA39C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA3A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTutorialControlController*))(Il2CppBase() + 0x4AFA3AC))(this);
	}

};

}
