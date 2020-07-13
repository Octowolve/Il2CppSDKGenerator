#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRPerkController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRPerkController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnPerkClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRPerkChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC68DC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC6980))(this);
	}
	template <typename T = void> T OnPerkClick(int32_t index) {
		return ((T (*)(BRPerkController*, int32_t))(Il2CppBase() + 0x1AC6B94))(this, index);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC6D2C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC6E48))(this);
	}
	template <typename T = void> T OnBRPerkChanged(uintptr_t _) {
		return ((T (*)(BRPerkController*, uintptr_t))(Il2CppBase() + 0x1AC6EF8))(this, _);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC6ADC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC7170))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC7178))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC7180))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRPerkController*))(Il2CppBase() + 0x1AC7188))(this);
	}

};

}
