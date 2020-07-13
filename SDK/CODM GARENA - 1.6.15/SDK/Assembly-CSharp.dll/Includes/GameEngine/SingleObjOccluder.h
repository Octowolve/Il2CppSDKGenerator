#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SingleObjOccluder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SingleObjOccluder"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Polys() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_aabb() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_AaBbCenter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_GameObjectTranslation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_GameObjectEulerAngle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_GameObjectId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecalculateAaBb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecalculatePolyCenters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T Clone(Il2CppVector3 targetPos, Il2CppVector3 targetEuler) {
		return ((T (*)(SingleObjOccluder*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x33F3698))(this, targetPos, targetEuler);
	}
	template <typename T = void> T Add(uintptr_t polygon) {
		return ((T (*)(SingleObjOccluder*, uintptr_t))(Il2CppBase() + 0x33F4144))(this, polygon);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(SingleObjOccluder*))(Il2CppBase() + 0x33F4224))(this);
	}
	template <typename T = void> T RecalculateAaBb() {
		return ((T (*)(SingleObjOccluder*))(Il2CppBase() + 0x33F38A8))(this);
	}
	template <typename T = void> T RecalculatePolyCenters() {
		return ((T (*)(SingleObjOccluder*))(Il2CppBase() + 0x33F4018))(this);
	}

};

}
