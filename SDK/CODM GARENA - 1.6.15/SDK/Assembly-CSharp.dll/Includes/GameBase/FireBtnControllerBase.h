#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FireBtnControllerBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FireBtnControllerBase"));
	}

	template <typename T = uintptr_t> T& m_FireBtnView() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(FireBtnControllerBase*))(Il2CppBase() + 0x31DD1B0))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FireBtnControllerBase*))(Il2CppBase() + 0x31DDB4C))(this);
	}
	template <typename T = void> T InitConfig(uintptr_t config) {
		return ((T (*)(FireBtnControllerBase*, uintptr_t))(Il2CppBase() + 0x31DDBF0))(this, config);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FireBtnControllerBase*))(Il2CppBase() + 0x31DDD1C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FireBtnControllerBase*))(Il2CppBase() + 0x31DDD24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitConfig(uintptr_t P0) {
		return ((T (*)(FireBtnControllerBase*, uintptr_t))(Il2CppBase() + 0x31DDD2C))(this, P0);
	}

};

}
