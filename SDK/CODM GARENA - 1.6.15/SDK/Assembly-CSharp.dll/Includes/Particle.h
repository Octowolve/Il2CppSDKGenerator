#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Particle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Particle"));
	}

	template <typename T = uintptr_t> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_ParentIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Damping() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Elasticity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Stiffness() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Inert() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_BoneLength() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_Position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_PrevPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_EndOffset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& m_InitLocalPosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppQuaternion> T& m_InitLocalRotation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
