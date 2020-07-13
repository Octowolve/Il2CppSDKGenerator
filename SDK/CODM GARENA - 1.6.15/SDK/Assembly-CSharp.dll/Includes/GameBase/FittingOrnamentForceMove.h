#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FittingOrnamentForceMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FittingOrnamentForceMove"));
	}

	template <typename T = uintptr_t> T& DiaoPaiRigid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PendentTransforms() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_LastFramePos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_DeltaPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& AddForceRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& UpdateFre() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& forcemulti() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_InitialPoses() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_InitialRots() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_IsReset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_ResetFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& ModifyForce() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordInitialTransforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTransforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FittingOrnamentForceMove*))(Il2CppBase() + 0x31E24C8))(this);
	}
	template <typename T = void> T Activate(uintptr_t Owner) {
		return ((T (*)(FittingOrnamentForceMove*, uintptr_t))(Il2CppBase() + 0x31E2840))(this, Owner);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FittingOrnamentForceMove*))(Il2CppBase() + 0x31E2A98))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FittingOrnamentForceMove*))(Il2CppBase() + 0x31E2E80))(this);
	}
	template <typename T = void> T RecordInitialTransforms() {
		return ((T (*)(FittingOrnamentForceMove*))(Il2CppBase() + 0x31E2578))(this);
	}
	template <typename T = void> T ResetTransforms() {
		return ((T (*)(FittingOrnamentForceMove*))(Il2CppBase() + 0x31E2C18))(this);
	}

};

}
