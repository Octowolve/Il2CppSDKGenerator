#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RspBonuseDescClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RspBonuseDescClient"));
	}

	template <typename T = int32_t> T& actv_begin_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& actv_end_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& drop_bonus() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& exp_bonus() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& gold_bonus() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& max_level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& min_level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& show_begin_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& show_end_time() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& show_min_level() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& show_max_level() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& time_zone() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
