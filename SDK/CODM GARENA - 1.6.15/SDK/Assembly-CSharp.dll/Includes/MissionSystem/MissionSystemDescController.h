#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class MissionSystemDescController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "MissionSystemDescController"));
	}

	template <typename T = uintptr_t> T& m_MissionSystemDescView() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDescView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayShowContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F3B98))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F3C3C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F3D48))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F3DF0))(this);
	}
	template <typename T = void> T UpdateDescView() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F3E98))(this);
	}
	template <typename T = void> T DelayShowContent() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F3FAC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F4124))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F412C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F4134))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MissionSystemDescController*))(Il2CppBase() + 0x32F413C))(this);
	}

};

}
