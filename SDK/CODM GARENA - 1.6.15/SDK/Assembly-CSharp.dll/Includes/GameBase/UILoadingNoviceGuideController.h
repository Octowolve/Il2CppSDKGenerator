#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class UILoadingNoviceGuideController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "UILoadingNoviceGuideController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D4084))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D4190))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D4238))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D42E0))(this);
	}
	template <typename T = bool> T UpdateView(uintptr_t loadingData) {
		return ((T (*)(UILoadingNoviceGuideController*, uintptr_t))(Il2CppBase() + 0x27D4384))(this, loadingData);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D4C5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D4C64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D4C6C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UILoadingNoviceGuideController*))(Il2CppBase() + 0x27D4C74))(this);
	}

};

}
