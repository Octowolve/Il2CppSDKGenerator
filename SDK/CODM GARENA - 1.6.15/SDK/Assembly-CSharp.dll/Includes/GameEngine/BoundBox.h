#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BoundBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BoundBox"));
	}

	template <typename T = uintptr_t> T& bounds() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppQuaternion> T& rotation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& axis() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAxis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVertices() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_intersects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_intersects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProjectionHasOverlap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindOverlap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetAxis() {
		return ((T (*)(BoundBox*))(Il2CppBase() + 0x3617860))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetVertices() {
		return ((T (*)(BoundBox*))(Il2CppBase() + 0x3617D08))(this);
	}
	template <typename T = bool> T intersects(Il2CppVector3 p) {
		return ((T (*)(BoundBox*, Il2CppVector3))(Il2CppBase() + 0x3618128))(this, p);
	}
	template <typename T = bool> T intersects_1(uintptr_t box) {
		return ((T (*)(BoundBox*, uintptr_t))(Il2CppBase() + 0x3618CEC))(this, box);
	}
	template <typename T = bool> T ProjectionHasOverlap(Il2CppArray<uintptr_t>* allAxis, Il2CppArray<uintptr_t>* aVertices, Il2CppArray<uintptr_t>* bVertices) {
		return ((T (*)(BoundBox*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3618EAC))(this, allAxis, aVertices, bVertices);
	}
	template <typename T = float> T FindOverlap(float astart, float aend, float bstart, float bend) {
		return ((T (*)(BoundBox*, float, float, float, float))(Il2CppBase() + 0x3618EC8))(this, astart, aend, bstart, bend);
	}

};

}
