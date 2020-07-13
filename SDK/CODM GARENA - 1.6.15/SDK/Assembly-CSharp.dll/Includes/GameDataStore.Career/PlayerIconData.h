#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameDataStore.Career {

class PlayerIconData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameDataStore.Career", "PlayerIconData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bReceived() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& receiveTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SortOrder() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& GoPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& GoLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ExpireTimeType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ExpireTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
