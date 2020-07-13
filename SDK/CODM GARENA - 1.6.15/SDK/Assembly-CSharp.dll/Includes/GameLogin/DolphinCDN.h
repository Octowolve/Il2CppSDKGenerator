#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class DolphinCDN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "DolphinCDN"));
	}

	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& channel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& user_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& server_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& is_gray() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
