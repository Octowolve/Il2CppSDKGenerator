#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ArrowTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ArrowTipsController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ArrowTipsController*))(Il2CppBase() + 0x2D63370))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ArrowTipsController*))(Il2CppBase() + 0x2D63414))(this);
	}
	template <typename T = void> T SetContent(Il2CppString* label, Il2CppVector3 labelOffset, float angle) {
		return ((T (*)(ArrowTipsController*, Il2CppString*, Il2CppVector3, float))(Il2CppBase() + 0x2D63560))(this, label, labelOffset, angle);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ArrowTipsController*))(Il2CppBase() + 0x2D63808))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ArrowTipsController*))(Il2CppBase() + 0x2D63810))(this);
	}

};

}
