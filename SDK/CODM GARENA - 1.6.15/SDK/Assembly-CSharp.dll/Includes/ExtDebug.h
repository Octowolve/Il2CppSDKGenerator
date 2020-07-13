#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtDebug"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_DrawBoxCastOnHit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBoxCastBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DrawBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CastCenterOnCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RotatePointAroundPivot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T DrawBoxCastOnHit(Il2CppVector3 origin, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, Il2CppVector3 direction, float hitInfoDistance, uintptr_t color) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x4BD852C))(0, origin, halfExtents, orientation, direction, hitInfoDistance, color);
	}
	template <typename T = void> static T DrawBoxCastBox(Il2CppVector3 origin, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, Il2CppVector3 direction, float distance, uintptr_t color) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, float, uintptr_t))(Il2CppBase() + 0x4BD89BC))(0, origin, halfExtents, orientation, direction, distance, color);
	}
	template <typename T = void> static T DrawBox(Il2CppVector3 origin, Il2CppVector3 halfExtents, Il2CppQuaternion orientation, uintptr_t color) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, uintptr_t))(Il2CppBase() + 0x4BD8834))(0, origin, halfExtents, orientation, color);
	}
	template <typename T = void> static T DrawBox_1(uintptr_t box, uintptr_t color) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4BD9518))(0, box, color);
	}
	template <typename T = Il2CppVector3> static T CastCenterOnCollision(Il2CppVector3 origin, Il2CppVector3 direction, float hitInfoDistance) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4BD86DC))(0, origin, direction, hitInfoDistance);
	}
	template <typename T = Il2CppVector3> static T RotatePointAroundPivot(Il2CppVector3 point, Il2CppVector3 pivot, Il2CppQuaternion rotation) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x4BD9CD0))(0, point, pivot, rotation);
	}

};

}
