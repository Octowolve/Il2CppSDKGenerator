#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModuleFileProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModuleFileProgress"));
	}

	template <typename T = uint32_t> T& fileId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& taskId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& nowSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& totalSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isReady() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isDownloadError() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& isDownloading() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& moduleList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetReady() {
		return ((T (*)(ModuleFileProgress*))(Il2CppBase() + 0x3312FD0))(this);
	}
	template <typename T = void> T SetError() {
		return ((T (*)(ModuleFileProgress*))(Il2CppBase() + 0x3313084))(this);
	}
	template <typename T = void> T SetDownloading() {
		return ((T (*)(ModuleFileProgress*))(Il2CppBase() + 0x3311420))(this);
	}

};

}
