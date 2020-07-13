#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneOccluderPolygon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneOccluderPolygon"));
	}

	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_Center() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_Points() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_IsOnConcaveContour() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Rotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecalculatePolyCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Rotate(float cosVertical, float sinVertical, uintptr_t target) {
		return ((T (*)(SceneOccluderPolygon*, float, float, uintptr_t))(Il2CppBase() + 0x33EB9DC))(this, cosVertical, sinVertical, target);
	}
	template <typename T = uintptr_t> T Clone(Il2CppVector3 thisPos, float thisVerticaleuler, Il2CppVector3 targetPos, float targetVerticaleuler) {
		return ((T (*)(SceneOccluderPolygon*, Il2CppVector3, float, Il2CppVector3, float))(Il2CppBase() + 0x33EBAD0))(this, thisPos, thisVerticaleuler, targetPos, targetVerticaleuler);
	}
	template <typename T = void> T RecalculatePolyCenter() {
		return ((T (*)(SceneOccluderPolygon*))(Il2CppBase() + 0x33EBE9C))(this);
	}

};

}
