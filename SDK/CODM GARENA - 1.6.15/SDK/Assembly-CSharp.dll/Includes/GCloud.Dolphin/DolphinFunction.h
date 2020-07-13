#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinFunction"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVersionApkPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVersionObbPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentVersionCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentBundleId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstExtractIfsPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T GetCurrentVersionApkPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x45223A8))(0);
	}
	template <typename T = Il2CppString*> static T GetCurrentVersionObbPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x452262C))(0);
	}
	template <typename T = Il2CppString*> static T GetCurrentVersionCode() {
		return ((T (*)(void *))(Il2CppBase() + 0x45228B0))(0);
	}
	template <typename T = Il2CppString*> static T GetCurrentBundleId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4522B34))(0);
	}
	template <typename T = Il2CppString*> static T GetFirstExtractIfsPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4522DB8))(0);
	}

};

}
