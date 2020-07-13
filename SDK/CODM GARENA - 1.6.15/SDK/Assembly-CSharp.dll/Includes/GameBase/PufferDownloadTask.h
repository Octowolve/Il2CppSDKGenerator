#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PufferDownloadTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PufferDownloadTask"));
	}

	template <typename T = Il2CppString*> T& FileName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& TaskID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& FileID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& NowSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& TotalSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
