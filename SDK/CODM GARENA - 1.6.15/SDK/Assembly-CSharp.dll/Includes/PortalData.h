#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PortalData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalData"));
	}

	template <typename T = uintptr_t> T& bound() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& portalTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& localPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppQuaternion> T& localRotation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint64_t> T& backRoomID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint64_t> T& frontRoomID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rooms() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
