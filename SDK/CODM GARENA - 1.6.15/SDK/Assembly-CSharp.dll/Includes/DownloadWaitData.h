#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DownloadWaitData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DownloadWaitData"));
	}

	template <typename T = int32_t> T& questID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& priority() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& moduleName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T CompareTo(uintptr_t obj) {
		return ((T (*)(DownloadWaitData*, uintptr_t))(Il2CppBase() + 0x4467CA8))(this, obj);
	}

};

}
