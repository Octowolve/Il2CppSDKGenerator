#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSurfaceReflector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSurfaceReflector"));
	}

	template <typename T = uintptr_t> T& AcousticTexture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& EnableAt() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& AllReflectors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& NeedClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& CachedPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MeshFilter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CachedTriangles() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CachedVerticles() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mRegistered() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mGeometrySetted() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = Il2CppVector3> T TransformToColliderLocalSpace(Il2CppVector3 vecInput, uintptr_t pCollider) {
		return ((T (*)(AkSurfaceReflector*, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x22A9730))(this, vecInput, pCollider);
	}
	template <typename T = void> T Optimize() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22A9808))(this);
	}
	template <typename T = uintptr_t> T _AddGeometrySet(uintptr_t acousticTexture) {
		return ((T (*)(AkSurfaceReflector*, uintptr_t))(Il2CppBase() + 0x22A9BD8))(this, acousticTexture);
	}
	template <typename T = void> T _RemoveGeometrySet() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22AAEA8))(this);
	}
	template <typename T = uintptr_t> static T AddGeometrySet(uintptr_t acousticTexture, uintptr_t meshFilter) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x22AAF64))(0, acousticTexture, meshFilter);
	}
	template <typename T = void> static T RemoveGeometrySet(uintptr_t meshFilter) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22ABBB4))(0, meshFilter);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22ABCD8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22ABEF0))(this);
	}
	template <typename T = bool> T get_IsRegistered() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22ABF44))(this);
	}
	template <typename T = void> T Register() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22ABF4C))(this);
	}
	template <typename T = void> T UnRegister() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22AC034))(this);
	}
	template <typename T = void> T UpdateWorldShift() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22AC130))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22AC184))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22AC380))(this);
	}
	template <typename T = bool> T ShouldByPassThisComp() {
		return ((T (*)(AkSurfaceReflector*))(Il2CppBase() + 0x22AC378))(this);
	}
	template <typename T = float> static T GetEnableSqrtDistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x22ABE3C))(0);
	}

};

}
