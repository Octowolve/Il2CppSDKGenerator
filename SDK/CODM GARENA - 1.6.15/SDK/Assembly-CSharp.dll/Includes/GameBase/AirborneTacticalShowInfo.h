#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AirborneTacticalShowInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AirborneTacticalShowInfo"));
	}

	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppQuaternion> T& Rotation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& OwnerID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
