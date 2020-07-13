#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ProneBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ProneBtnController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetSettingResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCrouchStatechanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ProneBtnController*))(Il2CppBase() + 0x2DBBF74))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ProneBtnController*))(Il2CppBase() + 0x2DBC018))(this);
	}
	template <typename T = bool> T GetSettingResult() {
		return ((T (*)(ProneBtnController*))(Il2CppBase() + 0x2DBC124))(this);
	}
	template <typename T = void> T OnCrouchStatechanged(uintptr_t msg) {
		return ((T (*)(ProneBtnController*, uintptr_t))(Il2CppBase() + 0x2DBC214))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ProneBtnController*))(Il2CppBase() + 0x2DBC494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ProneBtnController*))(Il2CppBase() + 0x2DBC49C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_GetSettingResult() {
		return ((T (*)(ProneBtnController*))(Il2CppBase() + 0x2DBC4A4))(this);
	}

};

}
