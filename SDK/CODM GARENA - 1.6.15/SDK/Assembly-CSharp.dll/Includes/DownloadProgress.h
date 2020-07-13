#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DownloadProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DownloadProgress"));
	}

	template <typename T = int32_t> T& questID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& nowSize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& wholeSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowProgreeValText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T get_Progress() {
		return ((T (*)(DownloadProgress*))(Il2CppBase() + 0x44679D0))(this);
	}
	template <typename T = float> T get_NowSizeM() {
		return ((T (*)(DownloadProgress*))(Il2CppBase() + 0x4467A44))(this);
	}
	template <typename T = float> T get_WholeSizeM() {
		return ((T (*)(DownloadProgress*))(Il2CppBase() + 0x4465C64))(this);
	}
	template <typename T = Il2CppString*> T ShowProgreeValText() {
		return ((T (*)(DownloadProgress*))(Il2CppBase() + 0x4467AA0))(this);
	}

};

}
