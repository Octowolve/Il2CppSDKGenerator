#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LevelUnlockItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LevelUnlockItem"));
	}

	template <typename T = uintptr_t> T& UnlockType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& UnlockID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& UnlockDesc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GoPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Show() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
