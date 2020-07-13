#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SISoundPlayingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SISoundPlayingInfo"));
	}

	template <typename T = uint32_t> T& Identifier() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& EndTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SoundType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SoundID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& SoundPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& SoundInstigator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(SISoundPlayingInfo*))(Il2CppBase() + 0x3575C78))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(SISoundPlayingInfo*, bool))(Il2CppBase() + 0x3575C80))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(SISoundPlayingInfo*))(Il2CppBase() + 0x3575C88))(this);
	}

};

}
