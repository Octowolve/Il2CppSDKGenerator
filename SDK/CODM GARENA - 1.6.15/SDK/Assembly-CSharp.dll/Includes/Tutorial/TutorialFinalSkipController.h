#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class TutorialFinalSkipController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "TutorialFinalSkipController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TutorialFinalSkipController*))(Il2CppBase() + 0x423BF7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TutorialFinalSkipController*))(Il2CppBase() + 0x423C020))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TutorialFinalSkipController*))(Il2CppBase() + 0x423C120))(this);
	}
	template <typename T = void> T OnSkipBtnClick() {
		return ((T (*)(TutorialFinalSkipController*))(Il2CppBase() + 0x423C254))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TutorialFinalSkipController*))(Il2CppBase() + 0x423C318))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TutorialFinalSkipController*))(Il2CppBase() + 0x423C320))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TutorialFinalSkipController*))(Il2CppBase() + 0x423C328))(this);
	}

};

}
