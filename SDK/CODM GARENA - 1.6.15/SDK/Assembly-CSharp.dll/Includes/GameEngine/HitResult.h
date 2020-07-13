#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class HitResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "HitResult"));
	}

	template <typename T = Il2CppVector3> T& HitLocation() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& HitNormal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& HitMaterialType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& HitCollider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(HitResult*))(Il2CppBase() + 0x36FD848))(this);
	}

};

}
