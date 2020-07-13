#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicDownloadMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicDownloadMap"));
	}

	template <typename T = uint32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& questId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& nowSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& wholeSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
