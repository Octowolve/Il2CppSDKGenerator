#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AimedFireSwitchController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AimedFireSwitchController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompositeBtnDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompositeBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AimedFireSwitchController*))(Il2CppBase() + 0x3B67548))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AimedFireSwitchController*))(Il2CppBase() + 0x3B675EC))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(AimedFireSwitchController*))(Il2CppBase() + 0x3B676F8))(this);
	}
	template <typename T = void> T OnBtnDown() {
		return ((T (*)(AimedFireSwitchController*))(Il2CppBase() + 0x3B67790))(this);
	}
	template <typename T = void> T OnCompositeBtnDown(int32_t index) {
		return ((T (*)(AimedFireSwitchController*, int32_t))(Il2CppBase() + 0x3B67828))(this, index);
	}
	template <typename T = void> T OnCompositeBtnUp(int32_t index) {
		return ((T (*)(AimedFireSwitchController*, int32_t))(Il2CppBase() + 0x3B678C8))(this, index);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AimedFireSwitchController*))(Il2CppBase() + 0x3B67968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AimedFireSwitchController*))(Il2CppBase() + 0x3B67970))(this);
	}

};

}
