#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CombinedLodControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CombinedLodControl"));
	}

	template <typename T = float> T& mFarDistance() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mNearDistace() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SqrFarDistance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_SqrNearDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mRelativeObjects() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& mMaxExtends() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& mCenter() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& mCameraPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_CombinedMeshRenderer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_SqrLodBias() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_CombinedMeshVisible() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_SeparatedMeshesVisible() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = float> static T& m_LastFoV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& m_Matric() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLodBias() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCombinedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSeparatedMeshes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CombinedLodControl*))(Il2CppBase() + 0x2D33400))(this);
	}
	template <typename T = float> T GetLodBias() {
		return ((T (*)(CombinedLodControl*))(Il2CppBase() + 0x2D3377C))(this);
	}
	template <typename T = void> T ShowCombinedMesh(bool show) {
		return ((T (*)(CombinedLodControl*, bool))(Il2CppBase() + 0x2D338A0))(this, show);
	}
	template <typename T = void> T ShowSeparatedMeshes(bool show) {
		return ((T (*)(CombinedLodControl*, bool))(Il2CppBase() + 0x2D339F0))(this, show);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CombinedLodControl*))(Il2CppBase() + 0x2D33C64))(this);
	}

};

}
