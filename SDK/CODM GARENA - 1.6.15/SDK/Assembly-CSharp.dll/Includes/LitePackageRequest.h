#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LitePackageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LitePackageRequest"));
	}

	template <typename T = uint64_t> static T& BYTES_MBYTES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Excute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDiskAvailableToDownload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Excute() {
		return ((T (*)(LitePackageRequest*))(Il2CppBase() + 0x493DE20))(this);
	}
	template <typename T = bool> T CheckDiskAvailableToDownload() {
		return ((T (*)(LitePackageRequest*))(Il2CppBase() + 0x493DEB8))(this);
	}

};

}
