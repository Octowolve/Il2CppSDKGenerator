#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionCheck
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollisionCheck"));
	}

	template <typename T = Il2CppVector3> static T& _AB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _R() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _AbsR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppVector3> static T& _AX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppVector3> static T& _BX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppVector3> static T& _v1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppVector3> static T& _v2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppVector3> static T& _v3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _aRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _bRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = float> static T& ar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = float> static T& br() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _identityMatrix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& sphere_cast_collider_storage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = int32_t> static T& MAX_RAYCAST_RESULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OverlapBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HalfExtentsFromBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PositionFromCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Box_Box() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuaternionToFloatArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = int32_t> static T OverlapBox(Il2CppVector3 center, Il2CppVector3 halfExtents, Il2CppQuaternion rotation, Il2CppArray<uintptr_t>* colliderStorage, uintptr_t killLayer) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D245E4))(0, center, halfExtents, rotation, colliderStorage, killLayer);
	}
	template <typename T = Il2CppVector3> static T HalfExtentsFromBoxCollider(uintptr_t boxCollider1) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D24CEC))(0, boxCollider1);
	}
	template <typename T = Il2CppVector3> static T PositionFromCollider(uintptr_t collider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D24EDC))(0, collider);
	}
	template <typename T = bool> static T Box_Box(Il2CppVector3 aPos, Il2CppVector3 aSize, Il2CppQuaternion aQuat, Il2CppVector3 bPos, Il2CppVector3 bSize, Il2CppQuaternion bQuat) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, Il2CppVector3, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x2D25038))(0, aPos, aSize, aQuat, bPos, bSize, bQuat);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T QuaternionToFloatArray(Il2CppQuaternion aQuat, Il2CppArray<uintptr_t>* aFlatMatrix3x3) {
		return ((T (*)(void *, Il2CppQuaternion, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D27EC0))(0, aQuat, aFlatMatrix3x3);
	}

};

}
