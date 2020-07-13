#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SelfExplodingBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SelfExplodingBtnController"));
	}

	template <typename T = uintptr_t> T& m_SelfExplodingBtnView() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SelfExplodingBtnController*))(Il2CppBase() + 0x2DFD5AC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SelfExplodingBtnController*))(Il2CppBase() + 0x2DFD6B8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(SelfExplodingBtnController*))(Il2CppBase() + 0x2DFD75C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SelfExplodingBtnController*))(Il2CppBase() + 0x2DFD910))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SelfExplodingBtnController*))(Il2CppBase() + 0x2DFD918))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(SelfExplodingBtnController*))(Il2CppBase() + 0x2DFD920))(this);
	}

};

}
