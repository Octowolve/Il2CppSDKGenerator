#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClimbSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClimbSpot"));
	}

	template <typename T = uintptr_t> T& startPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& endPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& climbType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& allClimbSpots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindClosestSpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCloserToStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ClimbSpot*))(Il2CppBase() + 0x3A20EE0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ClimbSpot*))(Il2CppBase() + 0x3A2115C))(this);
	}
	template <typename T = uintptr_t> static T FindClosestSpot(Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x3A2129C))(0, pos);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(ClimbSpot*))(Il2CppBase() + 0x3A2149C))(this);
	}
	template <typename T = bool> T IsCloserToStart(Il2CppVector3 pos) {
		return ((T (*)(ClimbSpot*, Il2CppVector3))(Il2CppBase() + 0x3A219E4))(this, pos);
	}

};

}
