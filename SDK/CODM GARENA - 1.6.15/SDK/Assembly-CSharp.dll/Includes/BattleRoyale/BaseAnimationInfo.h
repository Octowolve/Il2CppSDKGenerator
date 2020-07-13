#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BaseAnimationInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BaseAnimationInfo"));
	}

	template <typename T = uintptr_t> T& Clip() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& IsLoop() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& BlendInTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& BlendOutTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsAdditive() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BoneType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& InteruptedImmediately() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
