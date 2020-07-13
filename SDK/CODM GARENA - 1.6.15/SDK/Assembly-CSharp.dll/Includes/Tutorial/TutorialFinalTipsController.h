#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalTipsController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialFinalTipsController*))(Il2CppBase() + 0x423DA1C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialFinalTipsController*))(Il2CppBase() + 0x423DAC0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TutorialFinalTipsController*))(Il2CppBase() + 0x423DC0C))(this);
	}
	template <typename T = void> T SetText(Il2CppString* labelLocID) {
		return ((T (*)(TutorialFinalTipsController*, Il2CppString*))(Il2CppBase() + 0x423DCB4))(this, labelLocID);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialFinalTipsController*))(Il2CppBase() + 0x423DEAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialFinalTipsController*))(Il2CppBase() + 0x423DEB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TutorialFinalTipsController*))(Il2CppBase() + 0x423DEBC))(this);
	}

};

}
