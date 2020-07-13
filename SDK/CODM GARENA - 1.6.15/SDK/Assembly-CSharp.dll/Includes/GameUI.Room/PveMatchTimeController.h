#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class PveMatchTimeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "PveMatchTimeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x64);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDEFFC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDF108))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchBefore() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDF1AC))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchJoin() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDF51C))(this);
	}
	template <typename T = void> T ConfigureMapInfo(int32_t instanceId) {
		return ((T (*)(PveMatchTimeController*, int32_t))(Il2CppBase() + 0x2CDF274))(this, instanceId);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDF5DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDF5E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureMapInfoMatchBefore() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDF5EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigureMapInfoMatchJoin() {
		return ((T (*)(PveMatchTimeController*))(Il2CppBase() + 0x2CDF5F4))(this);
	}

};

}
