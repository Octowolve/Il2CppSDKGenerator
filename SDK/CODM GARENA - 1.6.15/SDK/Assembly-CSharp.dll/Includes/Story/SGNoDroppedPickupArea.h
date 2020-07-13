#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SGNoDroppedPickupArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SGNoDroppedPickupArea"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& AreasOnScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_BoxCollider() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SGNoDroppedPickupArea*))(Il2CppBase() + 0x3F0DE64))(this);
	}
	template <typename T = bool> static T IsInArea(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x3F0DFC0))(0, pos);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SGNoDroppedPickupArea*))(Il2CppBase() + 0x3F0E388))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SGNoDroppedPickupArea*))(Il2CppBase() + 0x3F0E578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(SGNoDroppedPickupArea*))(Il2CppBase() + 0x3F0E580))(this);
	}

};

}
