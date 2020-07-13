#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DropTrail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DropTrail"));
	}

	template <typename T = bool> T& IsEnabled() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& widthCurve() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& widthMultiplier() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& angleDivisions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& vertexDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& textureMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> static T& _name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _trail() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& _relativePos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _meshFilter() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _meshRenderer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& paths() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckExistence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTrail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDrawGizmos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get__mesh() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x41797E8))(this);
	}
	template <typename T = void> T set__mesh(uintptr_t value) {
		return ((T (*)(DropTrail*, uintptr_t))(Il2CppBase() + 0x4179814))(this, value);
	}
	template <typename T = int32_t> T get_pathCnt() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x4179840))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x41798C8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x4179D48))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x417B27C))(this);
	}
	template <typename T = bool> T CheckExistence() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x417996C))(this);
	}
	template <typename T = bool> T CheckActive() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x4179E18))(this);
	}
	template <typename T = void> T UpdateTrail() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x4179EE4))(this);
	}
	template <typename T = void> T UpdateMesh() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x417AA98))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DropTrail*))(Il2CppBase() + 0x417B4B4))(this);
	}
	template <typename T = bool> T UpdateTrailm__0(uintptr_t t) {
		return ((T (*)(DropTrail*, uintptr_t))(Il2CppBase() + 0x417B760))(this, t);
	}

};

}
