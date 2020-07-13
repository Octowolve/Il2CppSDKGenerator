#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DataIFSInitInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DataIFSInitInfo"));
	}

	template <typename T = bool> T& isHasPwd() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& ifsFileSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ifspath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ifsname() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
