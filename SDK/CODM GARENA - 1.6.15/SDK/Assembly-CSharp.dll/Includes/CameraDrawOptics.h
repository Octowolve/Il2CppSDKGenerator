#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraDrawOptics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraDrawOptics"));
	}

	template <typename T = Il2CppVector3> T& RotVect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& Offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_OpticTrans() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_OpticMat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Teleport() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& indexI() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& indexJ() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_LastTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpticInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPostRender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DrawQuad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Update() {
		return ((T (*)(CameraDrawOptics*))(Il2CppBase() + 0x531855C))(this);
	}
	template <typename T = void> T SetOpticInfo(uintptr_t trans, uintptr_t mat) {
		return ((T (*)(CameraDrawOptics*, uintptr_t, uintptr_t))(Il2CppBase() + 0x53186D8))(this, trans, mat);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(CameraDrawOptics*))(Il2CppBase() + 0x531879C))(this);
	}
	template <typename T = void> T DrawQuad(uintptr_t mat, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector2 extent, uintptr_t camera) {
		return ((T (*)(CameraDrawOptics*, uintptr_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector2, uintptr_t))(Il2CppBase() + 0x5318CFC))(this, mat, pos, rot, extent, camera);
	}

};

}
