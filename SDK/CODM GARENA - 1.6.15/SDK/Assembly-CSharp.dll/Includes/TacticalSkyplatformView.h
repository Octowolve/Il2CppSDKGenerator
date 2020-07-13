#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalSkyplatformView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalSkyplatformView"));
	}

	template <typename T = uintptr_t> T& SkyPlatformSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& WorldPos() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& tacticalInstance() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& bHasBeenInited() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& bPositionReady() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRequestTransformData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnSyncTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPos2MapPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldRotY2MapRotY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F484E4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F481DC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F485C8))(this);
	}
	template <typename T = void> T OnRequestTransformData() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F4874C))(this);
	}
	template <typename T = void> T OnSyncTransform(bool bIsShown, Il2CppVector3 position, float rotY) {
		return ((T (*)(TacticalSkyplatformView*, bool, Il2CppVector3, float))(Il2CppBase() + 0x3F48984))(this, bIsShown, position, rotY);
	}
	template <typename T = void> T OnSyncTransform_1() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F48B10))(this);
	}
	template <typename T = void> T UpdateTransform() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F48CE0))(this);
	}
	template <typename T = Il2CppVector2> T WorldPos2MapPos(Il2CppVector3 worldPos) {
		return ((T (*)(TacticalSkyplatformView*, Il2CppVector3))(Il2CppBase() + 0x3F48F44))(this, worldPos);
	}
	template <typename T = float> T WorldRotY2MapRotY(Il2CppVector3 Rot) {
		return ((T (*)(TacticalSkyplatformView*, Il2CppVector3))(Il2CppBase() + 0x3F49124))(this, Rot);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F49358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(TacticalSkyplatformView*))(Il2CppBase() + 0x3F49360))(this);
	}

};

}
