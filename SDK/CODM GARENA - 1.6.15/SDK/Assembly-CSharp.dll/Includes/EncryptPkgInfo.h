#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EncryptPkgInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EncryptPkgInfo"));
	}

	template <typename T = int32_t> T& cmd_id_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& game_pkg_() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& game_pkg_len_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& encrpty_data_() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& encrypt_data_len_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
