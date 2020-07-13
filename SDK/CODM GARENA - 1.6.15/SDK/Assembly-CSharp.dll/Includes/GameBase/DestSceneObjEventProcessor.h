#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class DestSceneObjEventProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "DestSceneObjEventProcessor"));
	}

	template <typename T = uintptr_t> T& m_SceneObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigNetSyncModuleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventAfterPawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterEventBeforePawnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDoDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E3CDC))(this);
	}
	template <typename T = void> T ConfigNetSyncModuleList() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E3E44))(this);
	}
	template <typename T = void> T RegisterEventAfterPawnStart() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E3F18))(this);
	}
	template <typename T = void> T RegisterEventBeforePawnStart() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E3FB0))(this);
	}
	template <typename T = void> T OnDoDamage(uintptr_t Msg) {
		return ((T (*)(DestSceneObjEventProcessor*, uintptr_t))(Il2CppBase() + 0x40E4048))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E4214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ConfigNetSyncModuleList() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E421C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventAfterPawnStart() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E4224))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterEventBeforePawnStart() {
		return ((T (*)(DestSceneObjEventProcessor*))(Il2CppBase() + 0x40E422C))(this);
	}

};

}
