#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RaycastManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RaycastManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& raycastDatas() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Raycast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T Raycast(Il2CppVector3 origin, Il2CppVector3 direction, uintptr_t* hitInfo, float maxDistance, int32_t layerMask, float cdTime) {
		return ((T (*)(RaycastManager*, Il2CppVector3, Il2CppVector3, uintptr_t*, float, int32_t, float))(Il2CppBase() + 0x2DDCCE4))(this, origin, direction, hitInfo, maxDistance, layerMask, cdTime);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(RaycastManager*, float))(Il2CppBase() + 0x2DDD414))(this, deltaTime);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(RaycastManager*, float))(Il2CppBase() + 0x2DDD774))(this, P0);
	}

};

}
