#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsScrollPlayControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsScrollPlayController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsScrollPlayControllerEn*))(Il2CppBase() + 0x4324450))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsScrollPlayControllerEn*))(Il2CppBase() + 0x432455C))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* tabList) {
		return ((T (*)(LiveOpsScrollPlayControllerEn*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4324600))(this, tabList);
	}
	template <typename T = bool> T IsDataValid() {
		return ((T (*)(LiveOpsScrollPlayControllerEn*))(Il2CppBase() + 0x4324714))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsScrollPlayControllerEn*))(Il2CppBase() + 0x4324840))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsScrollPlayControllerEn*))(Il2CppBase() + 0x4324848))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDataValid() {
		return ((T (*)(LiveOpsScrollPlayControllerEn*))(Il2CppBase() + 0x4324850))(this);
	}

};

}
