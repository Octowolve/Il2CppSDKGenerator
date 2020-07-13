#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class UpdateVariables
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "UpdateVariables"));
	}

	template <typename T = uint32_t> T& uErr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bGetVersion() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& bSuccess() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uint64_t> T& progress() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& uspeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bNoticeInstall() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& ApkPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& newVerInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
