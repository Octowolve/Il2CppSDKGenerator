#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class FireWall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "FireWall"));
	}

	template <typename T = int32_t> T& FireWallEffectID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_FireWallEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& CurrentPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Update() {
		return ((T (*)(FireWall*))(Il2CppBase() + 0x49C10F4))(this);
	}

};

}
