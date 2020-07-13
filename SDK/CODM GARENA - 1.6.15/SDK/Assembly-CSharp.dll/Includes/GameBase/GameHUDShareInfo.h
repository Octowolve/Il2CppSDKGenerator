#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GameHUDShareInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GameHUDShareInfo"));
	}

	template <typename T = Il2CppVector3> static T& kCenterDefaultPositon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> static T& kCenterPositions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& kCenterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<bool>*> T& mCenterOccupied() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCenterRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocOneCenterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCenterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeallocOneCenterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T InitCenterRegion() {
		return ((T (*)(GameHUDShareInfo*))(Il2CppBase() + 0x321B144))(this);
	}
	template <typename T = int32_t> T AllocOneCenterPosition(uintptr_t* result) {
		return ((T (*)(GameHUDShareInfo*, uintptr_t*))(Il2CppBase() + 0x321B2A8))(this, result);
	}
	template <typename T = Il2CppVector3> T GetCenterPosition(int32_t index) {
		return ((T (*)(GameHUDShareInfo*, int32_t))(Il2CppBase() + 0x321B5A0))(this, index);
	}
	template <typename T = bool> T DeallocOneCenterPosition(int32_t index) {
		return ((T (*)(GameHUDShareInfo*, int32_t))(Il2CppBase() + 0x321B7F8))(this, index);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameHUDShareInfo*))(Il2CppBase() + 0x321B9A0))(this);
	}

};

}
